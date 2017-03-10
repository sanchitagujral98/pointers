//sorting using pointers

# include <iostream.h>
# include <conio.h>
void sort(int *p, int n=5)
{
	int i,j;
	int *m=new int;
	for (i=0;i<=n-2;i++)
	{
		for (j=i+1;j<=n-1;j++)
		if(*(p+i)> *(p+j))
		{
			*m=*(p+i);
			*(p+i)=*(p+j);
			*(p+j)=*m;
		}
	}
	for(i=0;i<=n-1;i++)
	cout<<*(p+i);
	getch();
}
void main()
{
	int p[5]={1,2,3,4,5};
	 int n=5;
	sort(p,  n);
	getch();
}