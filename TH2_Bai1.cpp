#include<stdio.h>
#include<conio.h>

void nhapmang(int a[50],int n);
void xuatmang(int a[50],int n);
void maxmang(int a[50],int n); 
void tichmang(int a[50],int n);
void DemvaTinhTongNT(int a[50],int n);
void sapxep(int a[50],int n);
void timx(int a[50],int n);
void chenx(int a[50], int n );
void mangthaydoi(int a[50],int n);
void xoaphantu(int a[50], int n);

//////////////////////////////////////////////////////////

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
DemvaTinhTongNT(a,n); 
chenx(a,n);
mangthaydoi(a,n);
xoaphantu(a,n);
mangthaydoi(a,n);
sapxep(a,n);
mangthaydoi(a,n);
getch; 
}

/////////////////////////////////////////////////////////////////////////////////////////////

void nhapmang(int a[50],int n)
{   
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }    
}

/////////////////////////////////////////////////////////////////////////////////////////////

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

////////////////////////////////////////////////////////////////////////////////////////////

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

///////////////////////////////////////////////////////////////////////////////////////////

void tichmang(int a[50] , int n )
{
    int Tich=1; 
    for(int i=0; i<n ; i++)
    {
         Tich=Tich*a[i];
    }
    printf("\nTich cac phan tu trong mang la: %d", Tich);
}

/////////////////////////////////////////////////////////////////////////////////////////

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
int timthay =0;
printf("\nNhap phan tu X: ");        scanf("%d",&x);
for (int i=0;i<n;i++) 
 	{
   	 	if (x==a[i]) 
   	 	{
   	 		timthay =1;
   	 		printf("a[%d] ", i);
		}
	}
	if (timthay)
	{
		printf("\n La cac phan tu cua a = x");
	}
	else
	{
		printf("\nGia tri khong ton tai trong mang");
	}
}

///////////////////////////////////////////////////////////////////////////////////////

void chenx(int a[50], int n)
{
	int k,x,i;
	printf("\nNhap gia tri x can chen vao mang : ");   scanf("%d", &x);
		printf("\nNhap vi tri x can chen vao mang : ");   scanf("%d", &k);
	for (i=n ; i>k ; i--)
	{ 
	a[i] = a[i-1];
	}
	a[k] = x;
	n++;
/*	printf("Mang sau khi chen gia tri x la ");
	for (i = 0;i<n;i++)
	printf("%d",a[i]);   */	
}

////////////////////////////////////////////////////////////////////////////////////////

void mangthaydoi(int a[50],int n)
{ 
    printf("\nMang vua thay doi la:");
int i;
    for (i=0;i<n;i++)
    {
        printf("%5d",a[i]);
    }
    getch();
}

///////////////////////////////////////////////////////////////////////////////////////

void xoaphantu(int a[50], int n)
{
	int i,j,k;
	printf("\nNhap gia tri can xoa k : ",&k);   
	scanf("%d",&k);
	for (i=0; i<n; i++)
	 	if (a[i]==k) 
	 	{ 
		 	for (j=i; j<n-1; j++)
	 		a[j] = a[j+1];
	 }	  n--; i--;
}

////////////////////////////////////////////////////////////////////////////////////////

void DemvaTinhTongNT(int a[50],int n )
{ int isPrime(int num);
int i, count=0, sum=0, num;
{ if ( num<= 1) 
return 0;
}
for (int i=2; i*i<=num; i++ )
{ 
if (num%i == 0)
 { return 0;
 }
 return 1;
}
for (int i=0;i<n; i++ ){
if (isPrime(a[i]))
{ count++; sum+=a[i];
}
}
printf("\nso luong nguyen to trong mang la : ",count);
printf("\ntong so nguyen to trong mang: ",sum);
}

