#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void nhapmt(int a[50][50],int d, int c);
void xuatmt(int a[50][50],int d, int c);
void sapxephang(int a[50][50], int d, int c);
void sapxepcot(int a[50][50], int d, int c);
void timsongto(int a[50][50], int d, int c);


int main()
{ int n, key;
     int a[50][50];
	while(true)
		{
			system("cls");
			printf("****************************************************************\n");
			printf("***           CAC TINH NANG CUA CHUONG TRINH                 ***\n");
			printf("*** 1. Nhap & Xuat Mang Hai Chieu                            ***\n");
			printf("*** 2. Sap Xep Mang Theo Thu Tu Tang Dan                     ***\n");
			printf("*** 3. Tinh Tong Cac So Nguyen To Co Trong Mang              ***\n");
			printf("*** 4. Nhap Chuoi & Chuan Hoa Chuoi S                        ***\n");
			printf("*** 5. Nhap & Dem Ky Tu Giong Ky Tu Vua Nhap                 ***\n");
			printf("*** 6. Nhap Danh Sach Sinh Vien & Nhap Diem & Xep Loai       ***\n");
			printf("*** 7. In Danh Sach & Sap Xep theo KQHT                      ***\n");
			printf("*** 0. Thoat                                                 ***\n");
			printf("****************************************************************\n");
			
			printf("\n  \t\t    AN PHIM CHON:  ");
			scanf("%d",&key);
				switch(key)
				{
					 case 1:
					 	//fflush(stdin);
					 	int d,c;
					 	printf("\nNhap so dong d = "); scanf("%d",&d);
    					printf("\nNhap so cot c = "); scanf("%d",&c);
					 	nhapmt(a,d,c);
					 	printf("Ma tran vua nhap la \n");
					 	xuatmt(a,d,c);
					 	
					 	printf("\nNHAN PHIM BAT KY DE TIEP TUC!  ");
					 	getch();
					 	break;
					case 2:
						sapxephang(a,d,c);
						printf("\n MA TRAN SAU KHI SAP XEP THEO HANG:\n ");
						xuatmt(a,d,c);
						sapxepcot(a,d,c);
						printf("\n MA TRAN SAU KHI SAP XEP THEO COT:\n ");
						xuatmt(a,d,c);
					 	printf("\nNHAN PHIM BAT KY DE TIEP TUC!  ");
					 	getch();
					 	break;
					case 3:
						timsongto(a,d,c);
					 	printf("\nNHAN PHIM BAT KY DE TIEP TUC!  ");
					 	getch();
					 	break;
					case 4:
						fflush(stdin);
					 	printf("\nNHAN PHIM BAT KY DE TIEP TUC!  ");
					 	getch();
					 	break;
					case 5:
						fflush(stdin);
					 	printf("\nNHAN PHIM BAT KY DE TIEP TUC!  ");
					 	getch();
					 	break;
					case 6:
						fflush(stdin);
					 	printf("\nNHAN PHIM BAT KY DE TIEP TUC!  ");
					 	getch();
					 	break;
					case 7:
						fflush(stdin);
					 	printf("\nNHAN PHIM BAT KY DE TIEP TUC!  ");
					 	getch();
					 	break;
					case 0:
						exit(1);
					default:
						printf("\nXIN LOI CHUNG TOI CHUA PHAT TRIEN TINH NANG NAY:(( ");
					 	printf("\nNHAN PHIM BAT KY DE TIEP TUC!  ");
					 	getch();
					 	break;
				}
		}
}
void nhapmt(int a[50][50],int d, int c)
{ 
    printf("\nNhap vao ma tran\n");
   for(int i=0;i<d;i++)
    {
        for(int j=0;j<c;j++)
        {
        	printf("Nhap a[%d][%d] = ", i,j);
            scanf("%d",&a[i][j]);
        }
    }

}


void xuatmt(int a[50][50], int d, int c)
{
    for(int i=0;i<d;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("\t %d",a[i][j]);
        }
        printf("\n");
    }
}

void sapxephang(int a[50][50], int d, int c) 
 {
    for (int i = 0; i < d; i++) {
        for (int j = 0; j < c - 1; j++) {
            for (int k = 0; k < c - i - 1; k++) {
               
                if (a[i][k] > a[i][k + 1]) {
                    int temp = a[i][k];
                    a[i][k] = a[i][k + 1];
                    a[i][k + 1] = temp;
                }
            }
        }
    }
}

void sapxepcot(int a[50][50], int d, int c) 
 {
    for (int j = 0; j < c; j++) {
        for (int i = 0; i < d- 1; i++) {
            for (int k = 0; k < d - i - 1; k++) {
               
                if (a[k][j] > a[k + 1][j]) {
                    int temp = a[k][j];
                    a[k][j] = a[k + 1][j];
                    a[k + 1][j] = temp;
                }
            }
        }
    }
}		

void timsongto(int a[50][50], int d, int c)
 {
    int dem=0,x=1,tong=0;
    	for(int i=0; i<d; i++)
	      {   	
		  	for(int j=0; j<c; j++)
		  	{
			  x=1;
		  	if(a[i][j]<2)
		  	x=0;
            else
            for(int X=2;X<(a[i][j])-1;++X)
              if (a[i][j]%X==0)
              	x=0;
      if (x!=0)
			{  dem++;
			tong=tong+a[i][j];
			}
			}    

   }
printf("\nCo %d so nguyen to.",dem);
printf("\nTong so nguyen to la: %d",tong);
}
