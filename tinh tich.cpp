#include"stdio.h"
int main()
{
	int n,s=1;
	do{
		printf("nhap n>=1");
		scanf("%d",&n);
		
	} while(n<=0);
	for (int i=1;i<=n;i++)
	{
		s=s*i;
	}
	printf("\n S(n)=%d",s);
	
	return 0;
}
