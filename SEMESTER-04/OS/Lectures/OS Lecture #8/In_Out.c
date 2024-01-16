#include <iostream>
#include <unistd.h>
#include <cstring>
using namespace std;
int main()
{
char buf[15];
read(0,buf,15);
//close(1);
write(1,buf,strlen(buf));
close(1);
cout<<"OS"<<endl;

return 0;
}
