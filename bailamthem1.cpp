#include<stdio.h>
int main()
{
	int n;
	printf("Nhap vao mot so nguyen N: ");
	scanf("%d", &n);
	printf("________BANG CUU CHUONG CUA %d__________\n",n);
	for (int i=1; i<=10; i++)
{	
printf("%d x %d = %d\n",n, i, n*i );
}

return 0;
}
