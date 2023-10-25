#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c, delta, x1, x2;
    printf("Nhap so a: ");
    scanf("%f", &a);
    printf("Nhap so b: ");
    scanf("%f", &b);
  printf("Nhap so c: ");
    scanf("%f", &c);
    printf("\nPhuong trinh co dang la : %.0fx^2 +%.0fx +%.0f = 0",a,b,c);
    if(a == 0) {
        if(b == 0) {
            if (c == 0) {
                printf("\nPhuong trinh vo so nghiem.\n");
            } else {
                printf("\nPhuong trinh vo nghiem.\n");
            }
        } else {
            printf("\nPhuong trinh co nghiem x = %0.2f\n",-c/b);
        }
    } else {
        delta = b*b - 4*a*c;
        if(delta > 0) {
            x1 = (-b+sqrt(delta))/(2*a);
            x2 = (-b-sqrt(delta))/(2*a);
            printf("\nNghiem thu nhat x1 = %0.2f\n",x1);
            printf("\nNghiem thu hai x2 = %0.2f\n",x2);
        } else if ( delta == 0) {
            printf("\nPhuong trinh co nghiem kep: x1 = x2 = %0.2f\n",-b/2*a);
        } else {
            printf("\nPhuong trinh vo nghiem\n");
        }
    }
    return 0;
}
