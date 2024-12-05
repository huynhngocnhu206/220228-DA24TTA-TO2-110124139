#include"stdio.h"
struct PHAN_SO{
	int Tuso,Mauso;
};

typedef struct PHAN_SO PS;

void Nhap(PS *a);
void Xuat(PS a);
void RutGon(PS c);
void Cong(PS a,PS b,PS c);
void Tru(PS a,PS b,PS c);
void Nhan(PS a,PS b,PS c);
void Thuong(PS a,PS b,PS c);
int main()
{
	PHAN_SO a,b,c;
	
	Nhap(&a);
	printf("\nPhan so vua nhap la:");
	Xuat(a);
	Nhap(&b);
	printf("\nPhan so vua nhap la:");
	Xuat(b);
//	RutGon(a);
	
	Cong(a,b,c);
	Tru(a,b,c);
	Nhan(a,b,c);
	Thuong(a,b,c);
	
	return 0;
}
void Nhap(PS *a)
{
	// Nhap vao tu so
	printf("\nNhap vao tu so: ");
	scanf("%d",&a->Tuso);
	
	// Nhap vao mau so
	printf("\nNhap vao mau so: ");
	scanf("%d",&a->Mauso);
}
void Xuat(PS a)
{
	printf("%d/%d",a.Tuso,a.Mauso);
}
void RutGon(PS c)
{
	for(int i=2;i<10;i++)
	{
		while(c.Tuso%i==0&&c.Mauso%i==0)
		{
			for(int i=2;i<10;i++)
			{
				if(c.Tuso%i==0&&c.Mauso%i==0)
				{
					c.Tuso=c.Tuso/i;
					c.Mauso=c.Mauso/i;
				}
			}
		}
	}
	if(c.Mauso!=1)
	   printf("%d/%d",c.Tuso,c.Mauso);
	else
	   printf("%d",c.Tuso);
}
void Cong(PS a,PS b,PS c)
{
	printf("\n\nPhan so sau khi rut gon: ");
	RutGon(a);
	printf("\nPhan so sau khi rut gon: ");
	RutGon(b);
	c.Mauso=a.Mauso*b.Mauso;
	c.Tuso=a.Tuso*b.Mauso+b.Tuso*a.Mauso;
	printf("\nTong hai phan so la: ");
	RutGon(c);
}
void Tru(PS a,PS b,PS c)
{
	printf("\n\nPhan so sau khi rut gon: ");
	RutGon(a);
	printf("\nPhan so sau khi rut gon: ");
	RutGon(b);
	c.Mauso=a.Mauso*b.Mauso;
	c.Tuso=a.Tuso*b.Mauso-b.Tuso*a.Mauso;
	printf("\nHieu hai phan so la: ");
	RutGon(c);
}
void Nhan(PS a,PS b,PS c)
{
	printf("\n\nPhan so sau khi rut gon: ");
	RutGon(a);
	printf("\nPhan so sau khi rut gon: ");
	RutGon(b);
	c.Mauso=a.Mauso*b.Mauso;
	c.Tuso=a.Tuso*b.Tuso;
	printf("\nTich hai phan so la: ");
	RutGon(c);
}
void Thuong(PS a,PS b,PS c)
{
	printf("\n\nPhan so sau khi rut gon: ");
	RutGon(a);
	printf("\nPhan so sau khi rut gon: ");
	RutGon(b);
	c.Mauso=a.Mauso*b.Tuso;
	c.Tuso=a.Tuso*b.Mauso;
	printf("\nThuong hai phan so la: ");
	RutGon(c);
}

