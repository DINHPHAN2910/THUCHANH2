#include<stdio.h>
#include<conio.h>
void nhapmang(int a[50],int n);
void xuatmang(int a[50],int n);
void maxmang(int a[50],int n); 
void tichmang(int a[50],int n);
void DemvaTinhTongNT(int a[50],int n);
void sapxep(int a[50],int n);
void timx(int a[50],int n);
int main()
{ 
int a[50] ,n ;
printf("Nhap so phan tu mang: ");
    scanf("%d",&n);
nhapmang(a,n);
xuatmang(a,n);
maxmang(a,n); 
tichmang(a,n);
timx(a,n);
//DemvaTinhTongNT(a,n); 
sapxep(a,n);
xuatmang(a,n);
getch; 
}
///////////////////////////////////////////////////////////////////////////
void nhapmang(int a[50],int n)
{   
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }    
}
/////////////////////////////////////////////////////////////////////////
void xuatmang(int a[50],int n)
{ 
    printf("\nMang vua nhap la:");
int i;
    for (i=0;i<n;i++)
    {
        printf("%5d",a[i]);
    }
    getch();
}
//////////////////////////////////////////////////////////////////////////////
void maxmang(int a[50],int n)
{
int MAX = a[0];
    for(int i=0; i< n; i++)
    {
        if(a[i]>MAX)
            MAX = a[i];
    }
    printf("\nPhan tu lon nhat trong mang la %d", MAX);
}
//////////////////////////////////////////////////////////////////////////////
void tichmang(int a[50],int n)
{
    int Tich=1; 
    for(int i=0; i<n ; i++)
    {
         Tich=Tich*a[i];
    }
    printf("\nTich cac phan tu trong mang la: %d", Tich);
}
//////////////////////////////////////////////////////////////////////////////////
void sapxep(int  a[50] ,int n)
{
	int i,j,tam;
	for (i=0; i<n-1;i++)
	   for (j=j+1;j<n;j++)
	       if (a[i] > a[j]) 
	{  tam=a[i];
	   a[i]=a[j];
	   a[j]=tam;
	 } 
 } 
 ////////////////////////////////////////////////////////////////////////////////////////
void timx(int a[50], int n)
{ int x;
printf("\nNhap phan tu X: ");
scanf("%d",&x);
for (int i=0;i<n;i++) 
    if (x=a[i])
printf("\nX bang gia tri cua phan tu a[%d]:",a[i]);
else printf("\nGia tri khong ton tai trong mang");
}
