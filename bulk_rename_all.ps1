# PowerShell script to rename ALL course directories from "CODE - NAME" to "NAME - CODE" at once
# This script uses git mv to preserve Git history and makes a single commit

Write-Host "=== Bulk Directory Rename Script ===" -ForegroundColor Cyan
Write-Host "This script will rename all course directories from 'CODE - NAME' to 'NAME - CODE'" -ForegroundColor Yellow

# Function to extract course name and code from directory name
function Get-NewDirectoryName {
    param([string]$OldName)
    
    # Skip directories that don't follow the "CODE - NAME" pattern
    if ($OldName -notmatch "^([A-Z]{2,3}\d{4})\s*-\s*(.+)$") {
        return $null
    }
    
    $courseCode = $matches[1]
    $courseName = $matches[2].Trim()
    
    return "$courseName - $courseCode"
}

# Get all directories that match the pattern "CODE - NAME"
$directories = Get-ChildItem -Directory | Where-Object { 
    $_.Name -match "^([A-Z]{2,3}\d{4})\s*-\s*(.+)$" 
}

Write-Host "`nFound $($directories.Count) directories to rename:" -ForegroundColor Green

$renames = @()
foreach ($dir in $directories) {
    $oldName = $dir.Name
    $newName = Get-NewDirectoryName $oldName
    
    if ($newName -and $newName -ne $oldName) {
        $renames += @{
            Old = $oldName
            New = $newName
        }
        Write-Host "  $oldName -> $newName" -ForegroundColor Yellow
    }
}

if ($renames.Count -eq 0) {
    Write-Host "No directories need to be renamed." -ForegroundColor Green
    exit 0
}

Write-Host "`nThis script will:" -ForegroundColor Cyan
Write-Host "1. Rename all $($renames.Count) directories using 'git mv'" -ForegroundColor White
Write-Host "2. Make a single commit with all renames" -ForegroundColor White
Write-Host "3. Preserve Git history for all files" -ForegroundColor White

$confirm = Read-Host "`nDo you want to proceed with renaming all directories? (y/N)"

if ($confirm -eq 'y' -or $confirm -eq 'Y') {
    Write-Host "`nStarting bulk rename process..." -ForegroundColor Green
    
    $successful = 0
    $failed = 0
    $failedDirs = @()
    
    # Perform all renames
    foreach ($rename in $renames) {
        $oldName = $rename.Old
        $newName = $rename.New
        
        Write-Host "Renaming: $oldName" -ForegroundColor Yellow
        
        try {
            # Use git mv to rename the directory
            git mv $oldName $newName
            
            if ($LASTEXITCODE -eq 0) {
                Write-Host "  ✅ Successfully renamed" -ForegroundColor Green
                $successful++
            } else {
                Write-Host "  ❌ Git mv failed" -ForegroundColor Red
                $failed++
                $failedDirs += $oldName
            }
        }
        catch {
            Write-Host "  ❌ Error: $_" -ForegroundColor Red
            $failed++
            $failedDirs += $oldName
        }
    }
    
    Write-Host "`n" + "="*60 -ForegroundColor Cyan
    Write-Host "RENAME SUMMARY:" -ForegroundColor Cyan
    Write-Host "  Successfully renamed: $successful directories" -ForegroundColor Green
    Write-Host "  Failed: $failed directories" -ForegroundColor Red
    
    if ($failed -gt 0) {
        Write-Host "  Failed directories:" -ForegroundColor Red
        foreach ($failedDir in $failedDirs) {
            Write-Host "    - $failedDir" -ForegroundColor Red
        }
    }
    
    if ($successful -gt 0) {
        Write-Host "`nCreating commit with all renames..." -ForegroundColor Yellow
        
        # Create a comprehensive commit message
        $commitMessage = @"
Bulk rename: Convert all course directories from 'CODE - NAME' to 'NAME - CODE'

This commit renames $successful course directories to follow the new naming convention:
- Old format: CODE - NAME  
- New format: NAME - CODE

All directories renamed using 'git mv' to preserve file history.
This ensures that Git tracks these as renames rather than delete/add operations.

Directories renamed:
"@
        
        foreach ($rename in $renames) {
            if ($rename.Old -notin $failedDirs) {
                $commitMessage += "`n- $($rename.Old) -> $($rename.New)"
            }
        }
        
        # Commit all changes
        git commit -m $commitMessage
        
        if ($LASTEXITCODE -eq 0) {
            Write-Host "✅ All renames committed successfully!" -ForegroundColor Green
            
            Write-Host "`nNext steps:" -ForegroundColor Cyan
            Write-Host "1. Review the changes with: git show --name-status" -ForegroundColor White
            Write-Host "2. Push to GitHub with: git push" -ForegroundColor White
            Write-Host "3. Verify on GitHub that history is preserved" -ForegroundColor White
        } else {
            Write-Host "❌ Commit failed" -ForegroundColor Red
            Write-Host "You may need to manually commit the changes" -ForegroundColor Yellow
        }
    } else {
        Write-Host "❌ No directories were successfully renamed" -ForegroundColor Red
    }
    
} else {
    Write-Host "Operation cancelled." -ForegroundColor Yellow
}

Write-Host "`n=== Script completed ===" -ForegroundColor Cyan