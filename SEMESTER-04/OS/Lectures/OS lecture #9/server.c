#include <stdio.h>
#include <string.h>
#include <fcntl.h>          
#include <sys/stat.h>
#include <unistd.h>
#include <stdlib.h>


#define FIFO1 "XYZ/fifo.1"
#define FIFO2 "XYZ/fifo.2"
#define PERMS 0666
#define MESSAGE1 "Hello, Class!\n"
#define MESSAGE2 "OS, class!\n"

int main()
{
 char buff[BUFSIZ];
 int readfd, writefd;
 int n, size;

 if (mknod (FIFO1, S_IFIFO | PERMS, 0) < 0) {
 perror ("mknod FIFO1");
 exit (1);
 }
 if (mkfifo(FIFO2, PERMS) < 0) {
 unlink (FIFO1);
 perror("mknod FIFO2");
 exit (1);
 }
 if ((readfd = open(FIFO1, 0)) < 0) {
 perror ("open FIFO1");
 exit (1);
 }
 if ((writefd = open(FIFO2, 1)) < 0) {
 perror ("open FIFO2");
 exit (1);
 }
 size = strlen(MESSAGE1) + 1;
 if ((n = read(readfd, buff, size)) < 0) {
 perror ("server read"); 
 exit (1);
 }
 if (write (1, buff, n) < n) {
 perror("server write1"); 
 exit (1);
 }
 size = strlen(MESSAGE2) + 1;
 if (write (writefd, MESSAGE2, size) != size) {
 perror ("server write2"); 
 exit (1);
 }
 close (readfd); 
 close (writefd);
return 0;
} 
