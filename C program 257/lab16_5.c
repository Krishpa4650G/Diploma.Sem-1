#include <stdio.h>
void main()
{
	int i,n,ans=0;
	printf("enter a number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		ans=ans+i;
	}
	printf("%d",ans);
}