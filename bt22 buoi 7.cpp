#include"stdio.h"
#include"stdlib.h"
void Nhap(int*a,int n);
void Xuat(int*a,int n);
int Tong(int*a,int n);
int GTLN(int*a,int n);
int dem(int*a,int n);
int demX(int*a,int x);
int KTsoDuong(int*a,int n);
void SxTangDan(int*a,int n);
void locsoAm(int*a,int n);
int main()
{
	int *p,n,kq,x;
	int a[100];
	 
    // Nhap n 
	do
	{
		printf("nhap mot so n(n>0;n<50): ");
		scanf("%d",&n);
	}while(n<=0||n>=50);
		printf("nhap x: ");
		scanf("%d",&x);
	// Cap phat bo nho
	p =(int *) malloc(n*sizeof(int));

    // cau a
    printf("\nNhap danh sach so:\n ");
    Nhap(a,n);
    
    // cau b
     printf("\nDanh sach so:\n ");
    Xuat(a,n);
    
    // cau c
    kq=Tong(a,n);
    printf("\nTong la: %d",kq);
    
    // cau d
    kq=GTLN(a,n);
    printf("\nGia tri lon nhat la: %d",kq);
    
    // cau e
    kq=dem(a,n);
    printf("\nSo lan xuat hien cua GTLN la: %d",kq);
    
    //cau f
    kq=demX(a,n);
    printf("\nX duoc lap lai %d ",kq);
    
    // cau g
    if(KTsoDuong(a,n))
    {
    	printf("\nMang co chua so Duong \n ");
    }else
    {
    	printf("Mang khong co chua so Duong \n ");
    }
    
    // cau h
    printf("\nSau khi sap tang: ");
    SxTangDan(a,n);
    
    // cau i
    printf("\nCac So am: ");
    locsoAm(a,n);
    
	return 0;
}
void Nhap(int*a,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
}
void Xuat(int*a,int n)
{
    int i;
	for(i=0;i<n;i++)
	{
		printf("\t%d",a[i]);
	}
}
int Tong(int*a,int n)
{
	int s=0,i;
	for(i=0;i<n;i++)
	{
		s+=*(a+i);
	}
	return s;
}
int GTLN(int*a,int n)
{
	int max=a[0],i;
	for(i=0;i<n;i++)
	{
		if(max<*(a+i))
		{
		   max=*(a+i);
		}
	}
	return max;
}
int dem(int*a,int n)
{
	int dem=0,i,max;
	for(i=0;i<n;i++)
	{
		if(*(a+i)==GTLN(a,n))
		{
			dem++;
			
		}
		
	}
	return dem;
}
int demX(int*a,int x)
{
	int d,i,n;
	for(i=0;i<n;i++)
	{
		if(*(a+i)==x)
		{
			d++;
		}
	}
	return d;
}
int KTsoDuong(int*a,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(*(a+i)>0)
		{
		   return 1;	
		}
	}
	return 0;
}
void SxTangDan(int*a,int n)
{
	int i,j,tmp;
	for(i=0;i<n-1;i++)
	{
	    for(j=i+1;j<n;j++)
	 	{
	 		if((a[i]>a[j]))
	 		{
	 			tmp=a[i];
	 	    	a[i]=a[j];
	 	    	a[j]=tmp;
	 		}
   	 	
	 	}
	}
	for(i=0;i<n;i++)
	{
		printf("%5d",*(a+i));
	}
}
void locsoAm(int*a,int n)
{
  int i;
  for(i=0;i<n;i++)
  {
  	if(*(a+i)<0)
  	{
  		printf("%d\t",*(a+i));
  	}
  }
}

