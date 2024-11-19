#include"stdio.h"

void inGiaTri(int n);
void inGTChan(int n);
void GTChiahet5(int n);
void SoNgToNhoHon(int n);
void Tong(int n);
void TongLe(int n);
int TongSoNgToNhoHon(int n);
int TBCSoLe(int n);
void TBCSoNgToNhoHon(int n);

int main()
{ 
   int n;
   do {
   	
   	printf("Nhap so duong n: ");
   	scanf("%d",&n);
   	
   	}while (n>100||n<=0);
   	
   	inGiaTri(n);
	inGTChan(n);
	GTChiahet5( n);
    SoNgToNhoHon(n);
    Tong(n);
    TongLe( n);
    TongSoNgToNhoHon( n);
    TBCSoLe( n);
    TBCSoNgToNhoHon(n);
    
	return 0;
}
// cau a
void inGiaTri(int n)
{
	for(int i=1;i<=n;i++)
	{
		printf("%d\t",i);
		
	}
}
//cau b
void inGTChan(int n)
{
	printf("\n Gia Tri Chan la: ");
	for (int i=1;i<=n;i++)
	{
		if(i%2==0)
		{
			printf("\t%d",i);
		}
	}	
	
}
// cau c 
void GTChiahet5(int n)
{
	printf("\n GT chia het cho 5 la: ");
	for (int i=1;i<=n;i++)
	{
		if(i%5==0)
		{
			printf("\t %d",i);
		}
	}	
}
// cau d
void  SoNgToNhoHon(int n)
{ 
   printf("\n So Nguyen To Nho Hon n la: ");
   for (int i=2;i<n;i++)
   {
   	if(i%2!=0||i==2);
   	{
   		printf("\t %d",i);
   	}
   	
   }
}
//cau e
void Tong(int n)
{
	int s=0;
	for(int i=1;i<=n;i++)
	{
		s=s+i;
	}
	printf("\nTong tu 1 den n la: %d ",s);
}
// cau f
void TongLe(int n)
{
	int s;
	for(int i=1;i<=n;i++)
	{
		s=s+i;
	}
	printf("\nTong cac so le tu 1 den n la:%d ",s);
}
// cau g
int TongSoNgToNhoHon(int n)
{
	int s=0;
	for (int i=2;i<n;i++)
	{
		if(i%2!=0||i==2)
		{
			s=s+i;
		}
		
	}
	printf("\n Tong cac so nguyen to nho hon n: %d ",s);
	
}
//cau h
int TBCSoLe(int n)
{
	float TBC;
	int s=0;
	for (int i=1;i<=n;i++)
	{
		if(i%2!=0)
		{
			s=s+1;
		}
		
	}
	int sum=0;
	for (int i=1;i<=n;i++)
	{
		if(i%2!=0)
		{
			sum=s+1;
		}
    } 
    TBC= sum/s;
	printf("\n TBC cac so le n: %.2f ",TBC);
}
// cau i
void TBCSoNgToNhoHon(int n)
{
	
	float tbc;
	int S=0;
	for (int i=2;i<n;i++)
	{
		if(i%2!=0||i==2)
		{
			S=S+1;
		}
		
	}
	int s=0;
	for (int i=2;i<n;i++)
	{
		if(i%2!=0||i==2)
		{
			s=s+1;
		}
    } 
    printf("\n TBC so nguyen to nho hon n: %.2f",tbc);
}











