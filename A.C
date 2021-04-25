#include<stdio.h>
#include<conio.h>
int main()
{
	int i,m,n,j,l,s,x,y,a[20][20],b[20][20],c[20][20];
	//clrscr();
	printf("Welcome\nEnter no,of values=\n");
	scanf("%d" ,&n);

	printf("Enter no,of values=\n");
	scanf("%d" ,&m);

	i=0;
	while(i<n)
	{
		j=0;
		while(j<m)
		{  
	        printf("a(%d%d)",i+1,j+1);
			scanf("%d", &a[i][j]);
			j=j+1;
		}
			i=i+1;
	}
	printf("\n");

	l=0;
	while(l<n)
	{
		s=0;
		while(s<m)
		{       printf("b(%d%d)",l+1,s+1);
			scanf("%d", &b[l][s]);
			s=s+1;
		}
			l=l+1;

	}
	printf("\n");
				i=0;
				l=0;
				x=0;
				while(i<n,l<n,x<n)
				{
					j=0;
					s=0;
					y=0;
					while(s<m,j<m,y<m)
					{
					   c[x][y]=a[i][j]+b[l][s];

					   printf("%d  ",c[x][y]);

						 s=s+1;
						 j=j+1;
						 y=y+1;
					}
					printf("\n");
					i=i+1;
					l=l+1;
					x=x+1;

				}

	getch();
}
