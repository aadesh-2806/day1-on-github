#include<stdio.h>
#include<conio.h>
int main()

{
	int i,n;
	//clrscr();
	printf("enter value: ");
	scanf("%d" ,&n);
	i=1;
	while(i<=n)

	{
		if(i%2==0)
		{
			printf("0");
		}

		else
		{
			printf("1");
		}

		      i=i+1;
	}

	getch();
}
