#include <stdio.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdlib.h>
//using namespace std;
int main()
{
pid_t retval,PID;
printf("Process ID: %d",getpid());
printf("\n");
retval=fork();
if(retval<0)
{
//Fork Failed
//cout<<"Fork has been failed"<<endl;
printf("Fork has been failed");
}else if(retval==0)
{
//Child Process
//cout<<"Child Process ID: "<<getpid()<<endl;
printf("Child Process ID: %d",getpid());
printf("\n");
execlp("./XYZ","./XYZ","Hello","Class",NULL);
printf("Hello Class");
}
else
{
//sleep(20);
//Parent Process
//cout<<"Parent Process ID: "<<getpid()<<endl;
int status;
PID=wait(&status);
printf("Exit Status: %d",status);
printf("\n");
printf("Terminated Child ID: %d",PID);
printf("\n");

printf("Parent Process ID: %d",getpid());
printf("\n");
}
return 0;
}
