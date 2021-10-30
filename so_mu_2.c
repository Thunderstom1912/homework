// Đề bài: Tính số mũ mà không dùng hàm pow().

#include <stdio.h>

int main() {
    int x,y,i,temp;
    double z;
    printf("Hay nhap so can tinh: ");
    scanf("%d",&x);
    printf("Ban can so mu la: ");
    scanf("%d",&y);
    
    z = x;
    
    switch(y) {
        case 0:
        z = 1;
        break;
        
        case 1:
        z = x;
        break;
        
        default:
        if (y>0){
             i = y;
             while (i>1) {
                 temp = x;
                 z = z * temp;
                 i--;
             };
        };
        
        if (y<0) {
        	i = y;
             while (i<-1) {
                 temp = x;
                 z = z * temp;
                 i++;
             };
             z = 1 / z;
        };
        break;
    }
    
    printf("Ket qua cua phep tinh la: %f",z);
    
    return 0;
}
