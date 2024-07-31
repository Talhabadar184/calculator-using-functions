#include<iostream>
void sum(int a,int b,int& c)
{
	c=a+b;
}
void subtract(int a,int b,int& c)
{
	c=a-b;
}
void multiply(int a,int b,int& c)
{
	c=a*b;
}
void divide(int a,int b,int& c)
{
	c=a/b;
}
using namespace std;
int main()
{
	int x,y,z;
	char ch;
	cout<<"enter first number:"<<endl;
	cin>>x;
	cout<<"enter second number:"<<endl;
	cin>>y;
	cout<<"enter the sign: "<<endl;
	cin>>ch;
	if(ch=='+')
	sum(x,y,z);
	else if(ch=='-')
	subtract(x,y,z);
	else if(ch=='x')
	multiply(x,y,z);
	else if(ch=='/')
	divide(x,y,z);
	cout<<"result: "<<z;
}
