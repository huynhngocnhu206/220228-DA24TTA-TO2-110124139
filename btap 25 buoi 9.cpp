#include"stdio.h"
#include"string.h"
struct NGAY_THANG {
	int ngay,thang,nam;
};
struct MON_HOC{
	char mamon[10];
	float diem;
};
struct SINH_VIEN{
   char mssv[10],hoten[30],gioitinh[4],diachi[100];
   int somon;
   NGAY_THANG ngaysinh;
   MON_HOC monhoc;
    
};
typedef struct SINH_VIEN SV; 
   

 typedef struct NGAY_THANG NT;
 

 // khai bao ham
 void NhapSV(SV* a);
 void Xuat(SV a);
int main()
{
	SINH_VIEN a;
    
	NhapSV(&a);
	printf("Thong tin sinh vien vua nhap la: \n");
	
	Xuat(a);
	return 0;
}

void Xuat(SV a)
{
	printf("%s\t%s\t%s\t%s\t%d/%d/%d",a.mssv,a.hoten,a.diachi,a.gioitinh,a.ngaysinh.ngay,a.ngaysinh.thang,a.ngaysinh.nam);
}

void NhapSV(SV* a)
{
	// nhap ma so sinh vien
	printf("Nhap ma so sinh vien: ");
	fflush(stdin);
	gets(a->mssv);
	
    // Nhap ho ten
    printf("\nNhap ho ten: ");
    fflush(stdin);
    gets(a->hoten);

    // nhap dia chi
    printf("\nNhap dia chi: ");
    fflush(stdin);
    gets(a->diachi);
    
    // nhap gioi tinh
    printf("\nNhap gioi tinh: ");
    fflush(stdin);
    gets(a->gioitinh);
    
    printf("\nNhap ngay sinh: ");
    scanf("%d %d %d",&a->ngaysinh.ngay,&a->ngaysinh.thang,&a->ngaysinh.nam);
   
}

