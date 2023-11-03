#include<stdio.h>
#include<string.h>
#include <iostream>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
struct Sinhvien
{
	  char MSSV[10];
	  char HotenSV[30];
	  char Phai[3];
	  int Namsinh;
	  char Nganhhoc[30];
	  float KQcuoikhoa;
	  char Xeploai[20];
	  char Quequan[30];
};

typedef struct SinhVien SINHVIEN;
void TimSV(SINHVIEN a[], int n);
void INSV(SINHVIEN a[], int n);
void Sapxep(SINHVIEN a[], int n);
void NhapSV(SINHVIEN &x);
void NhapSVN(SINHVIEN a[], int n);
void XuatSV(SINHVIEN);
void XuatSVN(SINHVIEN a[], int n);

int main()
{
SINHVIEN *x, *a[10];
printf("\n\n\n Nhap so luong sinh vien"); scanf("%d",&n);
NhapSVN(*a,n);
XuatSVN(*a,n);
printf("\n\n\n An Phim bat ki de in danh sach xap xep");
getch();
Sapxep(*a,n);
XuatSVN(*a,n);
printf("\n\n\n An Phim bat ki de in danh sach SV Gioi_Xuat sac");
getch();
INSV(*a,n);
printf("\n\n\n An phim bat ki de tim Sv");
getch();
TimSV(*a,n);
}
int n,key;

  while(true)
{
system("cls");
printf("************************************\n");
printf("** CHUONG TRINH QUAN LY SINH VIEN **\n");
printf("** 1. Nhap DS sinh vien **\n");
printf("** 2. In DS sinh vien **\n");
printf("** 3. Sap xep KQ cuoi khoa **\n");
printf("** 4. In DS sinh vien Gioi,Xuat sac **\n");
printf("** 5. Tim kiem sinh vien theo MSSV **\n");
printf("** 0. Thoat **\n");
printf("*************************************\n");
fflush(stdin);
printf("\n \t\t AN PHIM CHON: ");
scanf("%d",&key);
}
switch(key)
{
case 1:
fflush(stdin);

void NhapSV(SINHVIEN &x)
	{ 
 fflush(stdin);
   printf("\nNhap Ma SV: ");
		gets(x.Masv);
    fflush(stdin);
  printf("\nNhap ho&ten: ");
		gets(x.Hotensv);   
  printf("\nNhap Phai: ");
   		gets(x.Phai);
   	fflush(stdin);
  printf("\nNhap Nganh hoc: ");
  		gets(x.Nganhhoc);
  	fflush(stdin);
  printf("\nNhap Quen quan: ");	
        gets("x.Quequan");
}
do 
{ 
printf("\nNhap Nam sinh:  ");
scantf("%d",&x.Namsinh);
} while(x.Namsinh<1980 || x.Namsinh>2010);

do
{ 
printf("\nNhap KQ cuoi khoa: ");
scanf("%f",&x.KQcuoikhoa);
} while(x.KQcuoikhoa<0 || x.KQcuoikhoa>4);


fflush(stdin);
			if(x.KQcuoikhoa<=1.5)
{strcpy(x.Xeploai,"Yeu");}
else 
			if(x.KQcuoikhoa<=2.5)
{strcpy(x.Xeploai,"Trung Binh");}
else 
			if(x.KQcuoikhoa<=3.0)
{strcpy(x.Xeploai,"Kha");}
else 
			if(x.KQcuoikhoa<=3.8)
{strcpy(x.Xeploai,"Gioi");}
else   {strcpy(x.Xeploai,"Xuat sac");}


void NhapSVN(SINHVIEN a[], int n)
{ 
for (int i=0; i<n; i++)
    {  printf("\nNhap sinh vien thu %d",i+1);
    NhapSV(a[i]);
    }
}
//goi ham de thuc hien cong viec tuong ung
printf("\nBam phim bat ky de tiep tuc!");
getch();
break;



case 2:
	void XuatSV(SNHVIEN x)
{ printf("|%5s|%-18s|%-6s|%10d|%-11s|%12.1f|%-10s|%-10s| ",x.MaSV, x.HotenSV, x.Phai, x.Namsinh, x.Nganhhoc, x.KQcuoikhoa, x.Xeploai, x.Quequan);
}
	void XuatSVN(SINHVIEN a[], int n)
	{ system("cls");
	printf("\n\n------------------------------------------------------------------------------------------\n");
	   printf("| MaSV | Ho ten sinh vien | Phai | Nam sinh | Nganh hoc | KQ cuoi khoa | Xep loai |Que quan|");
	for(int i=0; i<n; i++)
	{ printtf("|------|------------------|------|----------|-----------|--------------|----------|--------|\n");
	Xuatsv(a[i]);	}
	
	}
//goi ham thuc de hien cong  , viec tuong ung
printf("\nBam phim bat ky de tiep tuc!");
getch();
break;


case 3:
printf("\nBam phim bat ky de tiep tuc!");
//goi ham thuc de hien cong viec tuong ung
getch();
break;


case 4:
printf("\nBam phim bat ky de tiep tuc!");
//goi ham thuc de hien cong viec tuong ung
break;


case 5:
printf("\nBam phim bat ky de tiep tuc!");
//goi ham thuc de hien cong viec tuong ung
getch();
break;


case 0:
exit(1);
default:
printf("\nKhong co chuc nang nay!");
printf("\nBam phim bat ky de tiep tuc!");
getch();
break;
}
}

