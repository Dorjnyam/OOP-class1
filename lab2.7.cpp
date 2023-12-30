#include<iostream>
using namespace std;
void swap(int *p,int *q)
{
	int tmp;
	tmp=*p;
	*p=*q;
	*q=tmp;
}
void jish(int *m,int *n)
{
	if(*m==*n) cout<<"tentsuu";
	else if(*m>*n) cout<<*m<<" > "<<*n;
	else cout<<*n<<" > "<<*m;
}
int main()
{
	int a,b;
	cin>>a>>b;
	swap(&a,&b);
	cout<<a<<" "<<b<<endl;
	jish(&a,&b);
} 
