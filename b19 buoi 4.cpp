#define SIZE 100
#include <stdio.h>
void nhapMang(int a[], int n);
void xuatMang(int a[], int n);
int tongMang(int a[], int n);
int tongDuong(int a[],int n);
int tongViTriLe(int a[],int n);
int demPT(int a[],int n);
int demPTL(int a[],int n);
int demSNT(int a[],int n);
void timSNT(int a[],int n);
void inGTL(int a[],int n);
int kiemtra(int a[],int n);
int timX(int a[],int n);

int main()
{
	int a[SIZE];
	int n, kq,dem;
	
	do
	{
		printf("\nNhap vao so phan tu: ");
		scanf("%d", &n);
	}while(n<=0||n>100);
	
	//n hop le
	//goi ham cau a
	nhapMang(a,n);
	
	//Goi ham cau b
	printf("\nMang vua nhap la: ");
	xuatMang(a,n);
	
	//Goi ham cau c
	kq = tongMang(a,n);
	printf("\nTong cac gia tri trong mang la %d", kq);
	
	// Goi ham cau d 
	kq = tongDuong(a,n);
	printf("\nTong cac gia tri duong trong mang la %d", kq);
	
	// Goi ham cau e
	kq = tongViTriLe(a,n);
	printf("\nTong cac vi tri le trong mang la %d", kq);
	
	// Goi ham cau f
    dem = demPT(a,n);
    printf("\nCo %d phan tu am trong mang!! ",dem);
    
    // Goi ham cau g
    dem = demPTL(a,n);
    printf("\nCo %d phan tu le trong mang!! ",dem);
    
    // Goi ham cau h
    dem = demSNT(a,n);
    printf("\n Co %d phan tu la so nguyen to trong mang!! ",dem);
    
    // Goi ham cau i
    timSNT(a,n);
    
    // Goi ham cau j
    inGTL(a,n);
    printf("\n Gia tri le trong mang la: %d ");
    
    // Goi ham cau k
    kiemtra(a,n);
    
    //  Goi ham cau l
    timX(a,n);
    
	return 0;

}
int tongMang(int a[], int n)
{
	int tong = 0;
	int i=0;
	do
	{
		tong = tong + a[i];
		i++;
	}while(i<=n-1);
	return tong;
}

void xuatMang(int a[], int n)
{
	int i;
	for(i=0; i<=n-1; i++)
	{
		printf("%8d", a[i]);
	}
}
void nhapMang(int a[], int n)
{
	int i;
	
	i = 0;
	while(i<=n-1)
	{
		printf("\nNhap gia tri tai vi tri %d: ", i);
		scanf("%d", &a[i]); //a+i
		i++;
	}
}
int tongDuong(int a[],int n)
{
	int Tong = 0;
	for(int i = 0;i<n;i++)
	{
		if(a[i]>0)
		{
			Tong+=a[i];
		}
		
	}
	return Tong;
}
int tongViTriLe(int a[],int n)
{
	int sum = 0;
	for(int i=0;i<n;i++)
	{
		if(i%2!=0)
		{
			sum+=a[i];
		}
	}
	return sum;
}
int demPT(int a[],int n)
{
	int dem = 0;
	for(int i=0;i<n;i++)
	{
		if(a[i]<0)
		
		dem+=1;
	}
	return dem;
}
int demPTL(int a[],int n)
{
	int dl=0;
	for(int i=0;i<n;i++)
	{ 
	   if(i%2!=0)
	   {
	   	dl++;
	   }
	}
	return dl;
}
int demSNT(int a[],int n)
{
	int d=0;
	for(int i=0;i<n;i++)
	{ 
	   if(a[i]%2==0||a[i]==2)
	   {
	   	d++;
	   }
	   return d;
	}
}
void timSNT(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		if(a[i]%2==0||a[i]==2)
		{
			printf("\n\n %d so Nguyen to dau tien trong mang la: ",a[i]);break;
		}
	}
}
void inGTL(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		if(a[i]%2!=0)
		{
			printf("%d\t",a[i]);
		}
	}
}
int kiemtra(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		if(a[i]<0)
		
		printf("\n Co phan tu am trong mang!");
	}
	return 0;
}
int timX(int a[],int n)
{
	int x;
	printf("\nNhap so can tim:");
	scanf("%d",&x);
	for(int i=0;i<n;i++)
	{
		if(a[i]==x)
		{
			printf("\n %d co o vi tri a[%d]",x,i);
		}
	}
	return 0;
}
