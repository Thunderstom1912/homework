/* Đề bài: Viết chương trình nhập 1 ký tự và xử lý:
- Nếu là ký tự thường thì đổi sang hoa, in kết quả.
- Nếu là ký tự hoa thì đổi sang thường, in kết quả.
- Nếu là ký số, in "Day la mot ki so".
*/

#include<stdio.h>
#include<cctype>

void upper_lower(char kitu){
	if ((kitu >= 'a') && (kitu <= 'z')){
	 kitu = toupper(kitu);
	 printf("Chu hoa la: %c",kitu);
	} 
	else {
	 if((kitu >= 'A') && (kitu <= 'Z')) {
	 	 kitu = tolower(kitu);
	 	 printf("Chu thuong la: %c",kitu);
		 }
	 else {
	     printf("Day la mot ki so");
		 };
	 	
	};
}

int main(void) {
	 char kitu;
	
	 printf("Xin chao\n");
	 printf("Hay nhap vao 1 ki tu: ");
	 scanf("%c",&kitu);
	 
	 upper_lower(kitu);
	 
	 return 0;
}
