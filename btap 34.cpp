#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char masv[10];
    char hoten[50];
    int gioitinh; 
    float diem;   // Diem trung bình
} SINH_VIEN;

typedef struct {
    char malop[10];
    char tenlop[50];
    int siso;
    SINH_VIEN *dssv; // Danh sach sinh viên
} LOP_HOC;

// Khai bao ham
void nhapThongTinLop(LOP_HOC *lop);
void xuatThongTinLop(LOP_HOC lop);
void luuLopHocVaoFile(LOP_HOC *lops, int n, char *filename);
void docLopHocTuFile(LOP_HOC **lops, int *n, char *filename);
void hienThiSinhVienTheoMaLop(LOP_HOC *lops, int n, char *malop);
void thongKeNamNu(LOP_HOC *lops, int n);
void thongKeNoMon(LOP_HOC *lops, int n);

int main() 
{
    LOP_HOC *lops;
    int n;

    printf("Nhap so luong lop: ");
    scanf("%d", &n);
    lops = (LOP_HOC *)malloc(n * sizeof(LOP_HOC));

    for (int i = 0; i < n; i++) 
	{
        printf("\nNhap thong tin lop thu %d:\n", i + 1);
        nhapThongTinLop(&lops[i]);
    }

    char filename[] = "lophoc.dat";
    luuLopHocVaoFile(lops, n, filename);

    LOP_HOC *lopsFromFile;
    int nFromFile;
    docLopHocTuFile(&lopsFromFile, &nFromFile, filename);
   
   // Hien thi thong tin
    hienThiSinhVienTheoMaLop(lopsFromFile, nFromFile, "MALOP01");
    thongKeNamNu(lopsFromFile, nFromFile);
    thongKeNoMon(lopsFromFile, nFromFile);
    
    // Giai phong bo nho
    for (int i = 0; i < nFromFile; i++) 
	{
        free(lopsFromFile[i].dssv);
    }
    free(lopsFromFile);
    free(lops);

    return 0;
}
// Cau b
void nhapThongTinLop(LOP_HOC *lop)
{
    printf("Nhap ma lop: ");
    scanf("%s", lop->malop);
    printf("Nhap ten lop: ");
    scanf(" %[^\n]", lop->tenlop);
    printf("Nhap si so:");
    scanf("%d", &lop->siso);

    lop->dssv = (SINH_VIEN *)malloc(lop->siso * sizeof(SINH_VIEN));
    for (int i = 0; i < lop->siso; i++)
	{
        printf("\nNhap thong tin sinh vien thu %d:\n", i + 1);
        printf("Ma sinh vien:\n ");
        scanf("%s", lop->dssv[i].masv);
        printf("Ho ten:\n ");
        scanf(" %[^\n]", lop->dssv[i].hoten);
        printf("Gioi tinh (1: Nam, 0: Nu): ");
        scanf("%d", &lop->dssv[i].gioitinh);
        printf("Diem trung binh: ");
        scanf("%f", &lop->dssv[i].diem);
    }
}

// Cau c
void xuatThongTinLop(LOP_HOC lop) 
{
    printf("\nThong tin lop:\n");
    printf("Ma lop: %s\n", lop.malop);
    printf("Ten lop: %s\n", lop.tenlop);
    printf("Si so: %d\n", lop.siso);
    printf("Danh sach sinh vien:\n");
    for (int i = 0; i < lop.siso; i++)
	{
        printf("Ma SV: %s, Ho ten: %s, Gioi tinh: %s, Diem TB: %.2f\n",
               lop.dssv[i].masv, lop.dssv[i].hoten,
               lop.dssv[i].gioitinh ? "Nam" : "Nu",
               lop.dssv[i].diem);
    }
}

void luuLopHocVaoFile(LOP_HOC *lops, int n, char *filename) 
{
    FILE *file = fopen(filename, "wb");
    if (!file) 
	{
        printf("Loi mo file\n");
        return;
    }

    fwrite(&n, sizeof(int), 1, file);
    for (int i = 0; i < n; i++) 
	{
        fwrite(&lops[i], sizeof(LOP_HOC), 1, file);
        fwrite(lops[i].dssv, sizeof(SINH_VIEN), lops[i].siso, file);
    }
    fclose(file);
}

void docLopHocTuFile(LOP_HOC **lops, int *n, char *filename) 
{
    FILE *file = fopen(filename, "rb");
    if (!file) 
	{
        printf("Loi mo file.\n");
        return;
    }
    fread(n, sizeof(int), 1, file);
    *lops = (LOP_HOC *)malloc(*n * sizeof(LOP_HOC));

    for (int i = 0; i < *n; i++) 
	{
        fread(&(*lops)[i], sizeof(LOP_HOC), 1, file);
        (*lops)[i].dssv = (SINH_VIEN *)malloc((*lops)[i].siso * sizeof(SINH_VIEN));
        fread((*lops)[i].dssv, sizeof(SINH_VIEN), (*lops)[i].siso, file);
    }
    fclose(file);
}

// Cau d Hien thi danh sach sinh vien theo ma lop
void hienThiSinhVienTheoMaLop(LOP_HOC *lops, int n, char *malop) 
{
    for (int i = 0; i < n; i++) {
        if (strcmp(lops[i].malop, malop) == 0) {
            xuatThongTinLop(lops[i]);
            return;
        }
    }
    printf("Khong tim thay lop co ma %s.\n", malop);
}

// Cau e Thong ke so sinh vien nam nu
void thongKeNamNu(LOP_HOC *lops, int n)
{
    for (int i = 0; i < n; i++) 
	{
        int nam = 0, nu = 0;
        for (int j = 0; j < lops[i].siso; j++) 
		{
            if (lops[i].dssv[j].gioitinh)
			{
                nam++;
            }else
			{
                nu++;
			}
        }
        printf("Lop %s (%s): Nam: %d, Nu: %d\n", lops[i].malop, lops[i].tenlop, nam, nu);
    }
}

// Cau f Thong ke danh sach con no mon
void thongKeNoMon(LOP_HOC *lops, int n) 
{
    for (int i = 0; i < n; i++) {
        printf("\nLop %s (%s):\n", lops[i].malop, lops[i].tenlop);
        for (int j = 0; j < lops[i].siso; j++) {
            if (lops[i].dssv[j].diem < 5) {
                printf("Mã SV: %s, Ho tên: %s, Ðiem: %.2f\n",
                       lops[i].dssv[j].masv, lops[i].dssv[j].hoten, lops[i].dssv[j].diem);
            }
        }
    }
}


