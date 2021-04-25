#include<stdio.h>
#include<math.h>

void main()
{	
	int i,a[50],s,t,n,r,j;
	printf("hello\nenter value=");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{	
		printf("enter value%d=",i+1);
		scanf("%d",&a[i]);
	}
	r=1;
	for(s=0;s<n;s++)
	{
		t=1;
		for(j=0;j<n;j++)
		{
			if(j!=s)
			{
				t=t*a[j];
			}
		}
		printf("%d ",t);
	}
	getch();
}
