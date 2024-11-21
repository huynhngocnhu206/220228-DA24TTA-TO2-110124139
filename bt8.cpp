#include"stdio.h"
int main()
{
	
	int a;
	float b;
	char c;

   	printf("\n nhap vao 1 so nguyen duong: ");
	scanf("%d",&a);
	
	printf("\n nhap vao 1 so thuc: ");
	scanf("%f",&b);
	
	printf("\n nhap vao 1 ky tu (/ * - +): ");
	fflush(stdin);
	scanf("%c",&c);
	
	printf("\nSo nguyen:%d \n So thuc:%.2f \nKy tu:%c",a,b,c);
	return 0;
	
}
