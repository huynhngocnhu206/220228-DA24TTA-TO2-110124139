#include"stdio.h"
int main()
{
	// khai bao ham s
	int n,s=0;
	
	//nhap gia tri bien
	printf("\n Nhap n: ");
	scanf("%d",&n);
	
	//tinh tong cac chu so
	while(n>0)
	{
		int cs=n%10;
		s+=cs;
		n=n/10;
	}
	printf("tong cac chu so trong so nguyen la: %d",s);
	return 0;
}
