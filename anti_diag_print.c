#include<stdio.h>
#include<math.h>

void main()
{
	int i,a[50][50],j,n,t;
	printf("hello\nenter value=");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("enter %d,%d=",i+1,j+1);
			scanf("%d",&a[i][j]);
		}		
	}
	for(t=0;t<n;t++)
	{
		printf("[");
		j=t;
		for(i=0;i<=t && j>=0;i++)
		{
			printf("%d",a[i][j]);
			if(j!=0)
			{
				printf(",");
			}
			j--;
		}
		printf("]\n");
	}
	for(t--;t>=0;t--)
	{
		if(t!=0)
		{
			printf("[");
		}
		j=n-1;
		for(i=(n-t);i<=n-1 && j>=(n-t);i++)
		{
			printf("%d",a[i][j]);
			if(j!=n-t)
			{
				printf(",");
			}
			j--;
		}
		if(t!=0)
		{
			printf("]\n");
		}
	}
	getch();
}
