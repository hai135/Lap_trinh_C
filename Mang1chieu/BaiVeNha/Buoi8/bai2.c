//Nhập mảng 1 chiều n phần tử nhập từ bàn phím. Tính tổng các phần tử trong dãy
#include<stdio.h>
int main(){
    int a[100],n,sum=0;
    
    printf("Nhap so phan tu cua mang: ");
    scanf("%d",&n);

    printf("Nhap cac phan tu: \n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    for(int i=0;i<n;i++){
        sum+=a[i];
    }
    printf("Tong cac phan tu cua mang la: %d",sum);

}