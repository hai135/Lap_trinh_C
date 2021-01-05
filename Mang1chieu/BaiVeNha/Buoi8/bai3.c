//Nhập mảng 1 chiều n phần tử nhập từ bàn phím. Tìm max,min
#include<stdio.h>
int main(){
    int a[100],n,min,max;
    
    printf("Nhap so phan tu cua mang: ");
    scanf("%d",&n);

    printf("Nhap cac phan tu: \n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    min=max=a[0];

    for(int i=1;i<n;i++){
        if(max<a[i])max=a[i];
        if(min>a[i])min=a[i];
    }

    printf("Max = %d \nMin = %d",max,min);
}