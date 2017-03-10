//comparing basic salary of employee and returning the name of the person getting higher salary

# include <iostream.h>
# include <conio.h>
#include<stdio.h>
struct emp
{
	int ecode;
	char name[20];
	float basic;
};
char* compare(emp *e1,emp *e2)
{
	if(e1->basic>e2->basic)
	return e1->name;
	else
	return e2->name;
}
void main()
{
	clrscr();
	emp *p;
	p=new emp;
	cout<<"enter the name:";
	gets(p->name);
	cout<<"enter the basic salary";
	cin>>p->basic;
	cout<<