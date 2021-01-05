//Nhập mảng 1 chiều n phần tử nhập từ bàn phím. In ra các phần tử chẵn trong dãy
#include<stdio.h>
int main(){
    int a[100],n;

    printf("Nhap so phan tu trong mang: ");
    scanf("%d",&n);

    printf("Nhap cac phan tu trong mang:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Cac phan tu chan la: \n");
    for(int i=0;i<n;i++){
        if(a[i]%2==0){
            printf("%d ",a[i]);
        }
    }
}

