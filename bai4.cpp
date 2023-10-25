#include<stdio.h>

	float toan, ly, hoa, diemTB;
 void nhap()
{
  do{
    printf("\nNhap diem mon toan: ");
	scanf("%f",&toan);
	
    printf("\nNhap diem mon hoa: ");
	scanf("%f",&hoa);
	
 	printf("\nNhap diem mon ly:   ");
	scanf("%f",&ly);
  }while(toan < 0 || hoa < 0 || ly < 0 ||toan > 10 || hoa > 10 || ly > 10 );
}
void tinhTB()
{
  diemTB = (toan + hoa + ly )/3;
}
void xuat()
{
  printf("\nDiem trung binh là: %.1f", diemTB);
  printf("\n--------------------------------------\n");
}
void xeploai()
float diemTB;
{
if diemTB>=9 :
    print("xep loai xuat sac");
if (diemTB<9) and (diemTB>8):
    print(" xep loai gioi");
if (diemTB<8) and (diemTB >= 6.5):
     print("xep loai kha");
if (diemTB< 5) and (diemTB>= 3.5):
      print("xep loai tb");
if (diemTB< 6.5) and (diemTB>= 5):
      print("xep loai yeu");
if diemTB < 3.5:
    print("xep loai kem") ;
}

int main() 
{
  nhap();
  tinhTB();
  xuat();
  xeploai();
}
