/* Parent creates pipe, forks a child, child writes into
 pipe, and parent reads from pipe */
#include <iostream>
#include <sys/types.h>
#include <sys/wait.h>
#include <cstring>
#include <unistd.h>
using namespace std;
struct student{
int rollNo;
char name[20];

};
int main()
{
 int pipefd[2], pid, n, rc, nr, status;
  rc = pipe(pipefd);
  
 if (rc < 0) {
 perror("pipe");
 exit(1);
 }
 pid = fork ();
 if (pid < 0) {
 perror("fork");
 exit(1);
 }
 if (pid == 0) { /* Child’s Code */
 close(pipefd[0]);
/*int num;
num=10;
write(pipefd[1],&num,sizeof(int));
 */
 student s;
 s.rollNo=123;
 strcpy(s.name,"Ahmad");
 write(pipefd[1],&s,sizeof(student));
 close(pipefd[1]);
 exit(0);
 }
 /* Parent’s Code */
 close(pipefd[1]);
/*int a;
read(pipefd[0],&a,sizeof(int));
 cout<<a<<endl;
 */
 student std;
 read(pipefd[0],&std,sizeof(student));
 cout<<"Student Name: "<<std.name<<" Roll No: "<<std.rollNo<<endl;
 
 close(pipefd[0]);
 cout<<"Good work child!"<<endl;
 return(0);
}