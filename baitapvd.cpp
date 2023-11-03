#include<stdio.h>
#include<string.h>
#include <iostream>
#include<conio.h>
#include<math.h>
int main()
{ char s[50], s2[50], key;
while(true)
{
system("cls");
printf("************************************\n");
printf("** THAO TAC TREN CHUOI **\n");
printf("** 1. Nhap va chuan hoa chuoi **\n");
printf("** 2. Dem so tu trong chuoi **\n");
printf("** 3. Ghep chuoi **\n");
printf("** 4. Kiem tra doi xung **\n");
printf("** 5. In chuoi dao nguoc **\n");
printf("** 0. Thoat **\n");
printf("*************************************\n");
fflush(stdin);
printf("\n \t\t AN PHIM CHON: ");
scanf("%d",&key);
switch(key)
{
	
	
	
	
case 1:
fflush(stdin);

 printf("Nhap 1 chuoi ky tu: ");
    char chr[50];
    scanf("%s", &chr);
    printf("Ky tu vua nhap: %s\n", chr);
    return 0;
    
char XoaKyTu(char s[],char s1[])
{
    int len=strlen(s);
    int i;

    for(i=0;i<len;i++)
        {
            if(s[i]==s1[0])
                {
                    int j;
                    for(j=i;j<len;j++)
                        {
                            s[j]=s[j+1];
                        }
                    s[j+1]='\0';
                    i--;
                }
        }
    printf("Chuoi ki tu sau khi xoa: '%s'",s);
}
//goi ham de thuc hien cong viec tuong ung
printf("\nBam phim bat ky de tiep tuc!");
getch();
break;



case 2:
//goi ham thuc de hien cong viec tuong ung
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
}
