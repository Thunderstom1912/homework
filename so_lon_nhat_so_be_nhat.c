// Đề bài: Nhập 3 số, tìm số lớn nhất và số bé nhất trong ba số đó.

#include<stdio.h>

int main(){
	int a,b,c;
	printf("Xin chao\n");
	printf("Hay nhap so thu nhat: ");
	scanf("%d",&a);
	printf("Hay nhap so thu hai: ");
	scanf("%d",&b);
	printf("Hay nhap so thu ba: ");
	scanf("%d",&c);
	if (a >= b & a >= c) {
	     printf("So lon nhat la: %d\n",a);
		 } else {
		 	if (b >= a & b >= c) {
		 		printf ("So lon nhat la: %d\n",b);
		 		} else {
		 			printf("So lon nhat la: %d\n",c);
		 			};
		 	};
		 	
	if (a <= b & a <= c) {
	     printf("So be nhat la: %d\n",a);
		 } else {
		 	if (b <= a & b <= c) {
		 		printf ("So be nhat la: %d\n",b);
		 		} else {
		 			printf("So be nhat la: %d\n",c);
		 			};
		 	};
		 	
	return 0;
	}
