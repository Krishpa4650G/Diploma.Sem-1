#include <stdio.h>
void main()
{
	int i,n,a;
	printf("enter a number");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
		a=i*n;
		printf("\n%d ",a );
	}
}