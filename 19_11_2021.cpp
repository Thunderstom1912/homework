#include <stdio.h>

//Hàm kiểm tra số nguyên tố
int isprime(int n){
    int flag = 1;
    if (n <2) return flag = 0; 
    int i = 2;
    while(i <n){
        if( n%i==0 ) {
            flag = 0;
            break; 
        }
        i++;
    }
    return flag;
}

int main( ){
    //Khai báo biến
    int n,m;
    int a[100][100];

    //Khai báo kích thước mảng
    printf("Xin Chào...\n");
    printf("\n");
    do{
        printf("Hãy nhập kích thước của mảng: \n");
        printf("Số dòng(n): ");
        scanf("%d",&n);
        printf("Số cột (m): ");
        scanf("%d",&m);
        if(n==0 || 0>n || m>50) {
            printf("Thông số không hợp lệ!! Vui lòng kiểm tra và nhập lại!! \n");
            printf("\n");
        } else {
            printf("\n");
            printf("Thông số hợp lệ. Xin mời nhập giá trị vào mảng (theo hàng ngang): ");
        }
    } while (n==0 || 0>n || m>50);

    //Nhập mảng
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    //Xuất mảng
    printf("\n");
    printf("Ma trận vừa nhập là:\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    //Yêu cầu bài toán
    for(int )

    return 0;
}
