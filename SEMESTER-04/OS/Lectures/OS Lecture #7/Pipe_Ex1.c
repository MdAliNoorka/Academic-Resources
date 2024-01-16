/* Parent creates pipe, forks a child, child writes into
 pipe, and parent reads from pipe */
#include <iostream>
#include <sys/types.h>
#include <sys/wait.h>
#include <cstring>
#include <unistd.h>
using namespace std;
int main()
{
 int pipefd[2], pid, n, rc, nr, status;
 char *testString = "Hello, world!\n";
 char buf[1024];
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
 //sleep(20);
 write(pipefd[1], testString, strlen(testString));
 close(pipefd[1]);
 exit(0);
 }
 /* Parent’s Code */
 close(pipefd[1]);
wait(&status); 
n = strlen(testString);
 nr = read(pipefd[0], buf, n);
 rc = write(1, buf, nr);
 close(pipefd[0]);
 cout<<"Good work child!"<<endl;
 return(0);
}