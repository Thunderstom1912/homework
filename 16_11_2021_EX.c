#include<stdio.h>

int main( ) {
	 int n,i,x,y;
     int a[n];

     printf("Xin Chao;\n");
     printf("Ban muon nhap bao nhieu gia tri: ");
     scanf("%d",&n);
     printf("Hay nhap %d gia tri vao: ",n);

     for (i=0; i<n; i++){
         scanf("%d",&a[i]);
         if(a[i] <0) {
             printf("Loi Doi So Nho Hon 0!! Vui Long Kiem Tra Lai!!");
             return 0;
         }
         if(a[i]>100) {
             printf("Loi Doi So Lon Hon 100!! Vui Long Kiem Tra Lai");
             return 0;
         }
     }

     printf("Chuoi cua ban la: ");
     for (i=0; i<n; i++){
         printf("%d ",a[i]);
     }
     
     int z = 0;
     while (z=0){
         printf("Hay nhap gia tri X: ");
         scanf("%d",&x);
         printf("Hay nhap gia tri Y: ");
         scanf("%d",y);
         if (x<y) {
             z=x+y;
         };
         if (x>y) {
             printf("Loi Doi So (x>y)!! Vui Long Kiem Tra Lai!!");
             z=0;
         }

     }
     
	 return 0;
}
