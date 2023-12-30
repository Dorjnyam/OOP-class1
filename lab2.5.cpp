#include<iostream>
using namespace std;
int main()
{
short a=125;
short *p = &a;
cout<<p<<endl;
cout<<*p<<endl;
for(int i=0;i<10;i++)
{
p++;
cout<<p<<endl;
cout<<*p<<endl;
}
}
