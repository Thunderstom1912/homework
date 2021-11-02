// Đề bài: Nhập 4 số, tìm số lớn nhất và số bé nhất trong 4 số đó.

#include <stdio.h>

int main() {
    int a,b,c,d,max,min;
    
    printf("Nhap so thu nhat: ");
    scanf("%d",&a);
    printf("Nhap so thu hai: ");
    scanf("%d",&b);
    printf("Nhap so thu ba: ");
    scanf("%d",&c);
    printf("Nhap so thu tu: ");
    scanf("%d",&d);
    
    if (a>b & a>c & a>d) {
        max = a;
    } else {
      if (b>a & b>c & b>d) {
          max = b;
      }  else {
        if (c>a & c>b & c>d) {
            max = c;
        }  else {
          max = d;  
        };
      };
    };
    
    if (a<b & a<c & a<d) {
       min = a;
    } else {
      if (b<a & b<c & b<d) {
          min = b;
      }  else {
        if (c<a & c<b & c<d) {
            min = c;
        }  else {
          min = d;  
        };
      };
    };
    
    printf("So lon nhat trong 4 so la: %d\n",max);
    printf("So be nhat trong 4 so la: %d",min);
    
    return 0;
}
