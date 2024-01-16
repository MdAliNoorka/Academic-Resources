#include <stdio.h>
#include <string.h>
#include <fcntl.h>          
#include <sys/stat.h>
#include <unistd.h>
#include <stdlib.h>


#define FIFO1 "XYZ/fifo.1"
#define FIFO2 "XYZ/fifo.2"
#define MESSAGE1 "Hello, Class!\n"


int main()
{
 char buff[BUFSIZ];
 int readfd, writefd, n, size;

 if ((writefd = open(FIFO1, 1)) < 0) {
 perror ("client open FIFO1"); 
 exit (1);
 }
 if ((readfd = open(FIFO2, 0)) < 0) {
 perror ("client open FIFO2"); 
 exit (1);
 }
 size = strlen(MESSAGE1) + 1;
 if (write(writefd, MESSAGE1, size) != size) {
 perror ("client write1"); 
 exit (1);
 }
 if ((n = read(readfd, buff, size)) < 0) {
 perror ("client read"); 
 exit (1);
 }
 else
 if (write(1, buff, n) != n) {
 perror ("client write2"); 
 exit (1);
 }
 close(readfd); 
 close(writefd);
 /* Remove FIFOs now that we are done using them */
 if (unlink (FIFO1) < 0) {
 perror("client unlink FIFO1");
 exit (1);
 }
 if (unlink (FIFO2) < 0) {
 perror("client unlink FIFO2");
 exit (1);
 }
 exit (0);
return 0;
}
 
