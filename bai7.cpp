#include<stdio.h>
#include<math.h>
int main()
{
  int a, b, c;
  
  printf("\nNhap vao chieu dai canh a: ");
  scanf("%d", &a);
  printf("\nNhap vao chieu dai canh b: ");
  scanf("%d", &b);
  printf("\nNhap vao chieu dai canh c: ");
  scanf("%d", &c);
 
  if( a<b+c && b<a+c && c<a+b )
  {
    if( a*a==b*b+c*c || b*b==a*a+c*c || c*c== a*a+b*b)
      printf("Day la tam giac vuong");
    else if(a==b && b==c)
      printf("Day la tam giac deu");
    else if(a==b || a==c || b==c)
      printf("Day la tam giac can");
    else if(a*a > b*b+c*c || b*b > a*a+c*c || c*c > a*a+b*b)
      printf("Day la tam giac tu");
    else
      printf("Day la tam nhac nhon");
    }
  else
    printf("Ba canh a, b, c khong phai 3 canh cua 1 tam giac");
float S,p,h1,h2,h3;    
      p=(a+b+c)/2;
      printf("\nChu vi tam giac la:%.2f ",p);
     S=sqrt(p*(p-a)*(p-b)*(p-c));
     printf("\nDien tich tam giac tren la:%.2f ",S);
     h1 =2*S/a;
	 h2 =2*S/b;
	 h3 =2*S/c;
     printf("\nChieu cao canh a la:%.2f ",h1);
	 printf("\nChieu cao canh b la:%.2f ",h2);
	 printf("\nChieu cao canh c la:%.2f ",h3);
	 printf("\n------------------------------------\n");
}
 
  	
