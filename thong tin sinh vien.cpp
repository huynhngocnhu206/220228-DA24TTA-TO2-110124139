#include"stdio.h"
typedef struct SINH_VIEN
{
	char mssv[10],hoten[30],lop[10];
    int namsinh;
    float dxt;
}sv;
void xuat(sv a);
int main()
{
	sv a;
	 
	printf("nhap mssv: ");
	fflush(stdin);
	gets(a.mssv);
	
	printf("nhap hoten: ");
	fflush(stdin);
	gets(a.hoten);
	
	printf("nhap nam sinh : ");
	scanf("%d",&a.namsinh );

    printf("nhap lop: ");
	fflush(stdin);
	gets(a.lop);

	printf("nhap diem xet tuyen: ");
	scanf("%f,&a.dxt");
	printf("mssv:%s",a.mssv);
	
printf("\nnam sinh:%d",a.namsinh);
printf("\nhoten:%s",a.hoten);
printf("\nlop:%s",a.lop);
printf("\ndiemxettuyen:%f",a.dxt);

	return 0;
}












