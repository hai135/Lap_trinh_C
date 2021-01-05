/*
Nhập mảng 1 chiều n phần tử nhập từ bàn phím.
Kiểm tra xem các phần tử trong mảng có được xếp theo chiều tăng dần không
*/

#include<stdio.h>
int main(){
    int a[100],n,tang=1;

    printf("Nhap so phan tu trong mang: ");
    scanf("%d",&n);

    printf("Nhap cac phan tu trong mang:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(int i=0;i<n-1;i++){
        if(a[i]>a[i+1]){
            tang=0;
            break;
        }
    }

    if(tang==1){
        printf("Mang duoc sap xep tang dan");
    }else{
        printf("Mang khong duoc sap sep tang dan");
    }
}