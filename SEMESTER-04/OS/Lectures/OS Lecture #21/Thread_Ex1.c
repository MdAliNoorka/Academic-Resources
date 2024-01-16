#include <iostream>

using namespace std;


#define SIZE 10
#define THREAD_COUNT 2
int arr[SIZE]={10, 54 ,12 ,43 ,5 ,1 ,67 ,8 ,2 , 12};

struct ThreadParam
{
  int val;
  int start;
  int end; 
};

void*  search(void* tparam)
{
  ThreadParam *param= (ThreadParam*) tparam;
  bool *flag=new bool;
  *flag=false;
  for (int i=param->start; i<param->end; i++)
  {
    if (param->val== arr[i])
    {
      *flag=true;
      break;
    }
     
  }
  
  
  return flag;

}

int main()
{

 pthread_t id[THREAD_COUNT];
 ThreadParam param[THREAD_COUNT];
 
 for (int i=0; i<THREAD_COUNT; i++)
 {
   param[i].val=10;
   param[i].start=i*SIZE/THREAD_COUNT;
   param[i].end=param[i].start+SIZE/THREAD_COUNT;
   pthread_create(&id[i], NULL, &search, &param[i]);
   
 }
   
  
   
 for (int i=0; i<THREAD_COUNT; i++)
 {
    bool *flag;
   pthread_join(id[i], (void**) &flag);
   if (*flag==true)
   cout<<"Value found by thread "<<i<<" whose id is "<<id[i]<<endl;
   delete flag;
 }
 

  
}