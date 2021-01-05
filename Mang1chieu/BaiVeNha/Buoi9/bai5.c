/*
Nhập 1 dãy số thực không quá 50 phần tử, 
đưa ra màn hình tổng các số dương trong dãy.
Xóa tất cả các số âm có trong dãy.
*/

#include<stdio.h>
int main(){
    int a[100],n,sum=0;

    printf("Nhap n: ");
    scanf("%d",&n);

    printf("Nhap cac phan tu cua mang: \n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    for(int i=0;i<n;i++){
        if(a[i]>0)sum+=a[i];
    }
    printf("Tong cac so duong trong mang la %d\n",sum);

    for(int i=0;i<n;i++){
        if(a[i]<0){
            for(int j=i;j<n-1;j++){
                a[j]=a[j+1];
            }
            n--;
        }
    }
    
    printf("Sau khi xoa cac so am trong mang: \n");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}