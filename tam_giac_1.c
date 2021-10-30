// Đề bài: Nhập ba cạnh của  tam giác, kiểm tra xem 3 cạnh có thỏa điều kiện hình thành tam giác hay không0

#include<stdio.h>

int main () {
	 int a,b,c;
	 
	 printf("Xin chao \n");
	 printf("Hay nhap so a: ");
	 scanf("%d",&a);
	 printf("Hay nhap so b: ");
	 scanf("%d",&b);
	 printf("Hay nhap so c: ");
	 scanf("%d",&c);
	 printf("\n");
	 
	 if (a+b>c & a+c>b & b+c>a) {
	 	
	     printf("Day la 3 canh cua 1 tam giac");
		 } else {
		     printf("Day khong phai ba canh cua 1 tam giac");
			  };
	 return 0;
	 }
