//pointer to object

#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>

class emp
{
	int ecode;
	char name[20];
	float basic;
	public:
	void getdata()
	{
		cout<<"enter the employee code:";
		cin>>ecode;
		cout<<"enter the name:";
		gets(name);
		cout<<"enter the basic salary";
		cin>>basic;
	}
	void showdata()
	{
	cout<<"\n \n code:"<<ecode;
	cout<<"\n \n name:"<<name;
	cout<<"\n \n basic:"<<basic;
	}

};
void main()
{
	clrscr();
	emp *p;
	p=new emp;
	p->getdata();
	p->showdata();
	getch();
}
