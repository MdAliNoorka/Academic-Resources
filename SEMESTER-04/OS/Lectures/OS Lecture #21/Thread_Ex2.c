#include <iostream>
#include <string.h>
#include<pthread.h>
using namespace std;




void* myFunc(void* param)
{

 int a=*(int*) param;
 int *new_ptr=new int; 
 *new_ptr=a;
 (*new_ptr)++;
 //return (void*)new_ptr;
  pthread_exit( (void*) new_ptr);
  //do not use exit routine, it will terminate the whole process


}


int main()
{


  pthread_t id;
  int var=100;

  if (pthread_create(&id, NULL, &myFunc, &var)==-1)
  {
      cout<<"Thread Creation Failed!"<<endl;
      return 1;
  }
  
  cout<<"Hello World"<<endl;
 int *ptr;
  pthread_join(id, (void**) &ptr);
  cout<<*ptr;

}