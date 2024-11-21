#include"stdio.h"
int main()
{
	int n,i;
	do{
		printf("nhap n>0: ");
		scanf("%d",&n);
	
	}while(n<2||n>9);
	for (int i=1;i<=10;i++)
	{
		printf("\n %d * %d = %d",n,i,n*i);
	}

	return 0;
}
