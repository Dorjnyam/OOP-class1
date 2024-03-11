#include<iostream>
using namespace std;
int main()
{
	/*garaas utga awah heseg*/
	int a;
	cout<<"garaas ogoh utga: ";
	cin>>a;
	cout<<a<<endl;
	/*haygan huvisagchid haygin utgiig onooh heseg*/
	int *p1=&a;
	int **p2=&p1;
	int ***p3=&p2;
	int ****p4=&p3; 
	int *****p5=&p4;
	/*haygan huvisagch ni ymar hayg hadgalsniig haruulah heseg*/
	cout<<"a = " <<&a<<endl;
	cout<<"p1 = "<<p1<<" -> *p1 = "<<*p1<<endl;
	cout<<"p2 = "<<p2<<" -> *p2 = "<<*p2<<" -> **p2 = "<<**p2<<endl;
	cout<<"p3 = "<<p3<<" -> *p3 = "<<*p3<<" -> **p3 = "<<**p3<<" -> ***p3 = "<<***p3<<endl;
	cout<<"p4 = "<<p4<<" -> *p4 = "<<*p4<<" -> **p4 = "<<**p4<<" -> ***p4 = "<<***p4<<" -> ****p4 = "<<****p4<<endl;
	cout<<"p5 = "<<p5<<" -> *p5 = "<<*p5<<" -> **p5 = "<<**p5<<" -> ***p5 = "<<***p5<<" -> ****p5 = "<<****p5<<" -> *****p5 = "<<*****p5<<endl;
}

