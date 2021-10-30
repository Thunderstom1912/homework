//Đề bài: Dùng hàm pow() để tính số mũ.

#include<stdio.h>
#include<math.h>

int main() {
	int x,y,z;
	
	printf("Xin chao \n");
	printf("Hay nhap so can tinh: ");
	scanf("%d",&x);
	printf("Ban can luy thua bao nhieu: ");
	scanf("%d",&y);
	printf("\n");
	
	z = pow(x, y);
	
	printf("Ket qua la: %d",z);
     return 0;	
}
