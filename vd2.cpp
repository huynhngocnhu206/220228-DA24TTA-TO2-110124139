#include"stdio.h"
#
int main()
{
	char diachi[50];
	int namsinh;
	
	printf("nhap dia chi:");
	fflush(stdin);
	gets(diachi);
	
	printf("\nNhap nam sinh");
	scanf("%d",&namsinh);
	
	printf("\ndia chi: %s" ,diachi);
	printf("\n nam sinh: %d",namsinh);
    return 0;
}
