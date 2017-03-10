//swapping using pointers

#include<iostream.h>
#include<conio.h>

void main()
{
	int *a,*b,*c;
	a= new int;
	b=new int;
	c=new int;
	cout<<"enter the first number";
	cin>>*a;
	cout<<"enter the second number";
	cin>>*b;
	c=a;
	a=b;
	b=c;
	cout<<"first number:"<<*a;
	cout<<"second number:"<<*b;
	getch();
}