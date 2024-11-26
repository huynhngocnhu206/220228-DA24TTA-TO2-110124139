#define SIZE 100
#include "stdio.h"

void nhapMang(float a[],int n);
void xuatMang(float a[],int n);
float tinhTong(float a[],int n);
float tbc(float a[],int n);
int demDuong(float a[],int n);
void Sxtang(float a[],int n);
void inGtViTriLe(float a[],int n);
void inViTriCoGiaTri0(float a[],int n);
void timMax(float a[],int n);
int VTMaxdautien(float a[],int n);
void inVtMax(float a[],int n);
int KTSoAm(float a[],int n);

int main()
{
	float a[SIZE];
	int n, dem;
	float kq;
	
	do 
	{
		printf("\n Nhap vao so phan tu: ");
		scanf("%d",&n);
				
	}while(n<=0||n>100);

    // n hop le
   // cau a
   nhapMang(a,n);
   
   // cau b
    printf("\nMang vua nhap la: ");
    xuatMang(a,n);
    
    // cau c
    kq = tinhTong(a,n);
    printf("\nTong cac phan tu trong mang la: %f ",kq);
   
   // cau d
   printf("\nTrung binh cong cac phan tu tai vi tri le la: %.2f",tbc(a,n));
   
   // cau e
   printf("\nSo phan tu duong trong mang la: %d",demDuong(a,n));
    
   // cau f
   // Sxtang(a,n);
   
   // cau g
   inGtViTriLe(a,n);
   
   // cau h
   inViTriCoGiaTri0(a,n);
   
   // cau i
   timMax(a,n);
   
   // cau j
   printf("\nVi tri co gia tri lon nhat dau tien la: a[%d]",VTMaxdautien(a,n));
   
   // cau k
   inVtMax(a,n);
   
   // cau l
   if(KTSoAm(a,n)==0)
        printf("\nHam khong phai toan so am");
    else
        printf("\nHam yoan so am");
   
   return 0;
}
void nhapMang(float a[],int n)
{
	int i;
	i = 0;
	while(i<=n-1)
	{
		printf("\nNhap gia tri tai vi tri %d: ", i);
		scanf("%f", &a[i]); //a+i
		i++;
	}
}
void xuatMang(float a[],int n)
{
	int i;
	for(i=0;i<=n-1;i++)
	{
		printf("%8.2f",a[i]);
	}
}
float tinhTong(float a[],int n)
{
   float tong = 0;
   int i=0;
   do
   {
   	 tong = tong + a[i];
   	 i++;
   }while(i<=n-1);
   
   return tong;	
}
float tbc(float a[],int n)
{
	float tong = 0;
	int dem = 0;
	int i;
	for(i=1;i<n;i=i+2)
	{
		tong+=a[i];
	    dem++;
	}
	return tong/dem;
}
int demDuong(float a[],int n)
{
	int dem = 0;
	for(int i=0;i<n;i++)
	{
		if(a[i]>0)
		dem++;
	}
	return dem;
}
void Sxtang(float a[],int n)
{
	float t;
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-1;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	printf("\nMang sau khi sap xep tang la: \n");
	xuatMang(a,n);
}
void inGtViTriLe(float a[],int n)
{
	printf("\nCac gia tri tai vi tri le la: \t");
	for(int i=1;i<n;i=i+2)
	{
		printf("%.2f\t",a[i]);
	}
}
void inViTriCoGiaTri0(float a[],int n)
{
	printf("\nCac vi tri co gia tri 0 la: \t");
	for(int i=0;i<n;i++)
	{
		if(a[i]==0)
		{
			printf("a[%d]\t",i);
		}
	}
}
void timMax(float a[],int n)
{
	float m=a[0];
	printf("\nGia tri lon nhat trong mang la:\t");
	for(int i=0;i<n;i++)
	{
		if(a[i]>m)
		m=a[i];
	}
	printf("%.2f",m);
}
int VTMaxdautien(float a[],int n)
{
	float m=a[0];
	int Vt;
	for(int i=0;i<n;i++)
	{
		if(a[i]>m)
		{
			m=a[i];
			Vt=i;
			
		}
	}
	return Vt;
}
void inVtMax(float a[],int n)
{
	printf("\nCac vi tri co gia tri lon nhat trong mang la: \t");
	float m=a[0];
	for(int i=0;i<n;i++)
	{
		if(a[i]>m)
		m=a[i];
	}
	for(int i=0;i<n;i++)
	{
		if (a[i]==m)
		   printf("a[%d]\t",i);
	}
}
int KTSoAm(float a[],int n)
{
	for(int i=0;i<n;i++)
	{
		if(a[i]>=0)
		    return 0;
	}
}
