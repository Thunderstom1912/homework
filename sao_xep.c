/*
Đề bài: Nhập 4 só, sắp xếp theo thứ tự lớn tới nhỏ và nhỏ tới lớn theo menu sau:
1. Tu nho toi lon.
2. Tu lon toi nho.
3. Ket thuc.
Moi cac ban chon thao tac (1...3): 
*/

#include<stdio.h>

using namespace std;
void sapxep1(int &a, int &b){
	if(a>b){
	     int temp = a;
	     a = b;
	     b = temp;
		 } 
	}
void sapxep2(int &a, int &b){
	if(a<b){
		int temp = a;
		a = b;
		b = temp;
		}
	}
	

int main(){
	int a, b, c, d;
	int i;
	
	printf("Xin chao\n");
	printf("Hay nhap so thu nhat: ");
	scanf("%d",&a);
	printf("Hay nhap so thu hai: ");
	scanf("%d",&b);
	printf("Hay nhap so thu ba: ");
	scanf("%d",&c);
	printf("Hay nhap so thu tu: ");
	scanf("%d",&d);
	printf("\n");
	printf("Moi cac ban chon thao tac: \n");
	printf("1. Xep so tu lon den nho\n");
	printf("2. Xep so tu nho den lon\n");
	printf("3. Ket thuc\n");
	printf("Thao tac: ");
	scanf("%d",&i);
	printf("\n");
	
	switch (i){
		case 1:
			 sapxep1(a,b);
		     sapxep1(c,d);
		     sapxep1(b,d);
		     sapxep1(a,c);
		     sapxep1(b,c);			
		     printf("So duoc xap xep theo thu tu giam dan la: %d %d %d %d",a,b,c,d);
		break;
		
		case 2:
			sapxep2(a,b);
			sapxep2(c,d);
			sapxep2(a,c);
			sapxep2(b,d);
			sapxep2(b,c);
			printf("So duoc xep theo tu tu tang dan la: %d %d %d %d",a,b,c,d);
		break;
		
		case 3:
			printf("Ket thuc chuong trinh...");
		break;
		
		default:
			printf("Xuat hien loi. Vui long kiem tra lai!!");
		break;
		}
		
	return 0;
	}#include<stdio.h>

using namespace std;
void sapxep1(int &a, int &b){
	if(a>b){
	     int temp = a;
	     a = b;
	     b = temp;
		 } 
	}
void sapxep2(int &a, int &b){
	if(a<b){
		int temp = a;
		a = b;
		b = temp;
		}
	}
	

int main(){
	int a, b, c, d;
	int i;
	
	printf("Xin chao\n");
	printf("Hay nhap so thu nhat: ");
	scanf("%d",&a);
	printf("Hay nhap so thu hai: ");
	scanf("%d",&b);
	printf("Hay nhap so thu ba: ");
	scanf("%d",&c);
	printf("Hay nhap so thu tu: ");
	scanf("%d",&d);
	printf("\n");
	printf("Moi cac ban chon thao tac: \n");
	printf("1. Xep so tu lon den nho\n");
	printf("2. Xep so tu nho den lon\n");
	printf("3. Ket thuc\n");
	printf("Thao tac: ");
	scanf("%d",&i);
	printf("\n");
	
	switch (i){
		case 1:
			 sapxep1(a,b);
		     sapxep1(c,d);
		     sapxep1(b,d);
		     sapxep1(a,c);
		     sapxep1(b,c);			
		     printf("So duoc xap xep theo thu tu giam dan la: %d %d %d %d",a,b,c,d);
		break;
		
		case 2:
			sapxep2(a,b);
			sapxep2(c,d);
			sapxep2(a,c);
			sapxep2(b,d);
			sapxep2(b,c);
			printf("So duoc xep theo tu tu tang dan la: %d %d %d %d",a,b,c,d);
		break;
		
		case 3:
			printf("Ket thuc chuong trinh...");
		break;
		
		default:
			printf("Xuat hien loi. Vui long kiem tra lai!!");
		break;
		}
		
	return 0;
	}
