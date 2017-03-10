//this pointer

#include<iostream.h>
#include<conio.h>
#include<string.h>
class one
{
	char name[10];
	public:
	one (char *s)
	{
		strcpy(name,s);
	}
	void display()
	{
		cout<<"\n current calling object is: "<<name;
		getch();
	}
};
void main()
{
	one obj1("01"),obj2("02"),obj3("03");
	obj2.display();
	obj3.display();
}