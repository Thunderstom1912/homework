// Đề bài: Viết chương trình C, cho nhập 1 số nguyên dương n thoả: 0 < n < 1000. Hãy tìm số nguyên tố lớn nhất từ 1 đến n.

#include<stdio.h>

int isprime(int n){
    //flag = 0 => không phải số nguyên tố
    //flag = 1 => số nguyên tố
    
    int flag = 1;

    if (n <2) return flag = 0; /*Số nhỏ hơn 2 không phải số nguyên tố => trả về 0*/
    
    /*Sử dụng vòng lặp while để kiểm tra có tồn tại ước số nào khác không*/
    int i = 2;
    while(i <n){
        if( n%i==0 ) {
            flag = 0;
            break; /*Chỉ cần tìm thấy 1 ước số là đủ và thoát vòng lặp*/
        }
        i++;
    }

    return flag;
}

int main(void){
    int n;
    
    printf("Xin chao \n");
    printf("nhap mot so n: ");
    scanf("%d",&n);
    
    int i = 0, check;
    int ketqua = 0;
    
    while ( i < n){
        check = isprime(i);
        if( check == 1 ) {
             if(i >= ketqua) {ketqua = i;};
        };
        ++i;
    }
    
    printf("So nguyen to lon nhat trong day %d la: %d",n,ketqua);
    
    return 0;
}
