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
int main() 
{
  nhap();
  tinhTB();
  xuat();
}
