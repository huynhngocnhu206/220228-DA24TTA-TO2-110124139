#include"stdio.h"
int main()
{
	int sl;
	float dt,dg,pvc;
	
	printf("\n Nhap so luong: ");
	scanf("%d",&sl);
	
	printf("\n Nhap don gia: ");
	scanf("%f",&dg);
	
	printf("\n Nhap chi phi van chuyen: ");
	scanf("%f",&pvc);
	
	printf("\ndoanh thu: %f ",sl*dg-pvc);
	
	return 0;
}
