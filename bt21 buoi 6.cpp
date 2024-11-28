#include<stdio.h>
#define COL 100
#define ROW 100

void nhapMang(int a[ROW][COL],int m,int n);
void xuatMang(int a[ROW][COL],int m,int n);
int tinhTong(int a[ROW][COL],int m,int n);
int tongDong(int a[ROW][COL],int m,int n);
int tongCot(int a[ROW][COL],int m,int n);
int kiemtraDong(int a[ROW][COL],int m,int n);
int kiemtraCot(int a[ROW][COL],int m,int n);
void sxGiam(int a[ROW][COL],int m,int n);
int KtraCotLe(int a[ROW][COL],int m,int n);

int main()
{
	int m,n,kq;
	int a[ROW][COL];
	do
	{
	  printf("Nhap so dong: ");
	  scanf("%d",&m);
	  
	  printf("\nNhap so cot: ");
	  scanf("%d",&n);
	}while(n<=0||m<=0||n>=100||m>=100);
	
	 // cau a
   nhapMang(a,m,n);
	
	// cau b
	xuatMang(a,m,n);
	
	// cau c
	kq= tinhTong(a,m,n);
	printf("\nTong cac gia tri trong Mang la: %d ",kq);
	
	// cau d
	tongDong(a,m,n);
	
	// cau e
	tongCot(a,m,n);
	
	// cau f
	kiemtraDong(a,m,n);
	
	// cau g
     if(kiemtraCot(a,m,n)==1)
     {
     	printf("Cot co ton tai So nguyen to");
     }else
     {
     	printf(" Cot khong co ton tai So nguyen to");
     }
     
	//cau h
	sxGiam(a,m,n);
	
	//cau i
	if(KtraCotLe(a,m,n)==1)
	{
		printf("Cot toan so le");
		
	}else
	{
		printf("Cot khong co toan so le");
	}
	//cau j
	if(KtraTonTai(a,m,n)==1)
	{
		printf("Mang co ton tai gia tri ");
		
	}else
	{
		printf("Mang khong ton tai gia tri ");
	}
	
	// cau k
	ViTriX(a,m,n);
	
	// cau l
	printf("\nGia tri lon nhat  tren dong %d la: %d ",);
	
	// cau m
	printf("\nGia tri lon nhat  tren dong %d la: %d ",);
	
	// cau n
	InSNT(a,m,n);
	
	return  0;
	
}
void nhapMang(int a[ROW][COL],int m,int n)
{
	int i,j;
	printf("\nNhap cac gia tri cho mang:\n ");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
}
void xuatMang(int a[ROW][COL],int m,int n)
{
    int i,j;
	printf("\nMang vua nhap la:\n ");
	for(i=0;i<m;i++)
	{
	   		for(j=0;j<n;j++)
	   		{
	   		   printf("%5d",a[i][j]);
	   		   
	   		}
	   		printf("\n");
	}
}
int tinhTong(int a[ROW][COL],int m,int n)
{
	int tong=0;
	int i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			tong+=a[i][j];
		}
	}
	return tong;
}
int tongDong(int a[ROW][COL],int m,int n)
{
	int k,j,sum=0;
	do{
		printf("\nNhap so dong can tinh tong: ");
		scanf("%d",&k);
	}while(k<0||k>=m);
	
	for(j=0;j<n;j++)
	{
		if(k<m)
		{
			sum+=a[k][j];
		}
	}
	printf("Tong dong %d la: %d",k,sum);

}
int tongCot(int a[ROW][COL],int m,int n)
{
	int s=0,h,i;
	do{
		printf("\nNhap so cot can tinh tong: ");
		scanf("%d",&h);
	}while(h<0||h>=n);
	
	for(i=0;i<n;i++)
	{
		if(h<n)
		{
			s+=a[i][h];
		}
	}
	printf("Tong cot %d la: %d",h,s);
	
}
int kiemtraDong(int a[ROW][COL],int m,int n)
{
	int k;
	do{
		printf("\n\nNhap so dong can kiem tra So Am: ");
		scanf("%d",&k);
	}while(k<0||k>=m);
	for(int j=0;j<n;j++)
	{
		if(k<m)
		{
			if(a[k][j]<0)
			{
				printf("Dong co ton tai so am");break;
			}else
			  {  printf("Dong khong ton tai so am");break;       }
		}
	}
}
int kiemtraCot(int a[ROW][COL],int m,int n)
{
	int h;
	do{
		printf("\nNhap so cot can kien tra SNT: ");
		scanf("%d",&h);
	}while(h<0||h>=n);
	for (int i=0;i<m;i++)
	{
		if(a[i][h]<2)
		{
			continue;
		}
		if(a[i][h]==2||a[i][h]%2!=0)
		{    return 1;         	}
	}
}
void sxGiam(int a[ROW][COL],int m,int n)
{
	int t,k;
	printf("\nNhap so dong can sap xep: ");
	scanf("%d",&k);
	if(k<0||k>=m)
	{
		printf("\nDong khong hop le! ");
	}else
	{ 
	    for(int j=0;j<m;j++)
	    {
	    	for(int l=0;l<m-1;l++)
	    	{
	    		if(a[k][l]<a[k][l+1])
	    		{
	    			t=a[k][l];
	    			a[k][l]=a[k][l+1];
	    			a[k][l+1]=t;
	    		}
	    	}
	    }
	 
	}
	printf("\nDong %d sau khi sap xep Giam la:\n ",k);
	xuatMang(a,m,n);
	
}
int KtraCotLe(int a[ROW][COL],int m,int n)
{
	int k;
	printf("\nNhap so cot can sap xep: ");
	scanf("%d",&k);
	if(k<0||k>=m)
	{
		printf("\nCot khong hop le! ");
	}else
	{
		for(int i=0;i<n;i++)
		{
			if(a[i][k]%2==0)
			return 0;
		}
		return 1;
	}
}
int KtraCotLe(int a[ROW][COL],int m,int n)
{ 
   printf("/nX = ");
   scanf("%d",&x);
   for(i=0;i<m;i++)
   {
   	for(j=0;j<n,j++)
   	{
   		if(a[i][j]==x)
   		return 1;
   	}
   	
   }
}
void VitriX(int a[ROW][COL],int m,int n)
{
	printf("/nNhap so X = ");
   scanf("%d",&x);
   printf("\nVi tri co gia tri bang %d la: ",x);
   for(i=0;i<m;i++)
   {
   	for(j=0;j<n,j++)
   	{
   		if(a[i][j]==x)
   		printf("a[%d][%d]\t",i,j);
   	}
   	
   }
}
// cau l
int MaxDong(int a[ROW][COL],int m,int n)
{
	int max=a[k][0];
	printf("\nNhap so dong de xem co gia tri lon nhat: ");
	scanf("%d",&k);
	if(k<0||k>=m)
	{
		printf("Dong khong hop le! ");
	}else 
	{
		for(j=0;j<n;j++)
		{
			if(a[k][j]>max)
			   max=a[k][j];
		}
	}
	return max;
	
}
// cau l
int MinDong(int a[ROW][COL],int m,int n)
{
	int min=a[k][0];
	printf("\nNhap so dong de xem co gia tri nho nhat: ");
	scanf("%d",&k);
	if(k<0||k>=m)
	{
		printf("Dong khong hop le! ");
	}else 
	{
		for(j=0;j<n;j++)
		{
			if(a[k][j]>min)
			   min=a[k][j];
		}
	}
	return min;
}
void InSNT(int a[ROW][COL],int m,int n)
{
	printf("\n K = ");
	scanf("%d",&k);
	if(k<0||k>=m)
	{
		printf("\nDong khon hop le! ");
	}else
	{
		printf("Cac so nguyen to tren dong %d la: ",k);
		for(int j=0;j<n,j++)
		{
			if(Ktsnt(a[k][j])==1)
			printf("%d\t",a[k][j])
		}
	}
}

