#include<stdio.h>

int main( ) {
	 int n,i,x,y;
     int a[n];

     printf("Xin Chao;\n");
     printf("Ban muon nhap bao nhieu gia tri: ");
     scanf("%d",&n);
     if (n<0) {
         printf("Gia Tri Khong Hop Le!! Vui Long Kiem Tra Lai!!");
         return 0;
     } else {
         if (n>100) {
             printf("Gia Tri Khong Hop Le!! Vui Long Kiem Tra Lai!!");
             return 0;
         };
     };
     printf("Hay nhap %d gia tri vao: ",n);

     for (i=0; i<n; i++){
         scanf("%d",&a[i]);
     }

     printf("Chuoi cua ban la: ");
     for (i=0; i<n; i++){
         printf("%d ",a[i]);
     }
     printf("\n");
     
     x=0; 
     y=0;
     while (x-y>=0){
         printf("Hay nhap gia tri cho X: ");
         scanf("%d",&x);
         printf("Hay nhap gia tri cho Y: ");
         scanf("%d",&y);
         int z = y-z;
         if(z<0) {printf("Gia Tri Khong Hop Le (x>y)!! Vui Long Kiem Tra Lai!!");};
     }

	 return 0;
}
