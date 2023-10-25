#include<stdio.h>
int main()
{ 
int a;
do { 
printf("Nhap vao mot so tu 1-->7 : ");
scanf("%d",&a);
} while (a<0||a>7);
if (a==1) printf("\n  1 : Sunday");
if (a==2) printf("\n  2 : Tuesday");
if (a==3) printf("\n  3 : Wednesday");
if (a==4) printf("\n  4 : Thursday");
if (a==5) printf("\n  5 : Friday");
if (a==6) printf("\n  6 : Saturday");
if (a==7) printf("\n  7 : Sunday");
return(0);
}
