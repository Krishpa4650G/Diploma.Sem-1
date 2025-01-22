#include <stdio.h>
void main ()
{
	int i=0,n,ans;
	printf("enter a number");
	scanf("%d",&n);
	do{
		ans=0;
		i++;
		ans=ans+i;
		printf("\n%d",ans);
	}while(i<=n);

}