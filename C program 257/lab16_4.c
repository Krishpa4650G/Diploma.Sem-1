#include <stdio.h>
void main()
{
	int x,y,ans=1,i;
	printf("enter a number");
	scanf("%d",&x);
	printf("enter its power");
	scanf("%d",&y);
	for(i=1;i<=y;i++)
	{
		ans=ans*x;
	}
	printf("%d",ans);
}