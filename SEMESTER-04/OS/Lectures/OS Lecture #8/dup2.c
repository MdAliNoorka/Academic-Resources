#include<stdio.h>
#include <unistd.h>
#include <fcntl.h>
  
int main()
{
    // open() returns a file descriptor file_desc to a 
    // the file "dup.txt" here"
  
    int file_desc = open("dup.txt", O_WRONLY | O_APPEND);
      
    if(file_desc < 0)
        printf("Error opening the file\n");
      
    // dup() will create the copy of file_desc as the copy_desc
    // then both can be used interchangeably.
  
     dup2(file_desc,1);
          
    // write() will write the given string into the file
    // referred by the file descriptors
  
    printf("Operating System");      
    return 0;
}