//to find largest element of array using pointers

#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int *p, *big, n;
	cout<<"enter number of terms";
	cin>>n;
	big=new int(0);
	p=new int[0];
	for(int i=0;i<=n-1;i++)
	{
		cout<<"\n enter the element: ";
		cin>>*(p+i);
		if(*(p+i) > *big)
		*big=*(p+i);
	}
	cout<<"\n biggest: "<<*big;
	getch();
}