#include"stdio.h"
int main()
{
	int n,s;
	do{
		printf("nhap n>0");
		scanf("%d",&n);
		
	} while(n<=0);
	for (int i=1;i<=n;i++)
	{
		s=s+i;
	}
	printf("\n S(n)=%d",s);
	
	return 0;
}
