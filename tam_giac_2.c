// Đề bài: Nhập ba cạnh của tam giac, kiểm tra điều kiện, in ra kết quả đó là tam giác gì.

#include<stdio.h>
//#include<conio.h>

void tamgiac(int a, int b,int c) {
	if(a + b <= c || a + c <= b ||  b + c <= a)
	{
		printf("\nTam giac khong hop le. Xin kiem tra lai !");
	}
	else
	{
		printf("\nDay la tam giac: ");
	    if((a == b) && (b == c))
		{
			printf("Deu");
		}
		else
		{
			if(a * a + b * b == c * c || a * c + c * c == b * b || b * b + c * c == a * c)
			{
				printf("Vuong");
			}
			if(a == b || a == c || b == c)
		    {
			    printf("Can");
		    }
			else
			{
				printf("Thuong");
			}
		}
	}
		  
	 }

int main() {
     int a,b,c;
     printf("Xin chao\n");
	 printf("Hay nhap canh thu nhat: ");
	 scanf("%d",&a);
	 printf("Hay nhap canh thu hai: ");
	 scanf("%d",&b);
	 printf("Hay nhap canh thu ba: ");
	 scanf("%d",&c);
	 
	 tamgiac(a,b,c);
	 
     return 0;
     }
