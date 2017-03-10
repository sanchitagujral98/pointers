//structures using pointers

# include <iostream.h>
# include <conio.h>
#include<stdio.h>
struct emp
{
	int ecode;
	char name[20];
	float basic;
};
void main()
{
	clrscr();
	emp *p;
	float tax=0.0,pf=0.0,hra=0.0,net=0.0,da=0.0;
	p=new emp;
	cout<<"enter the employee code:";
	cin>>p->ecode;
	cout<<"enter the name:";
	gets(p->name);
	cout<<"enter the basic salary";
	cin>>p->basic;
	cout<<"\n \n code:"<<p->ecode;
	cout<<"\n \n name:"<<p->name;
	cout<<"\n \n basic:"<<p->basic;
	tax=(10/100)*(p->basic);
	pf=(20/100)*(p->basic);
	hra=(30/100)*(p->basic);
	da=(110/100)*(p->basic);
	net=p->basic+hra+da-tax-pf;
	cout<<"\n \n net salary:"<<net;
	getch();
}
