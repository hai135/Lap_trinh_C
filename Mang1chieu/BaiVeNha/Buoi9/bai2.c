//Nhập mảng 1 chiều n phần tử nhập từ bàn phím.Chèn số X vào vị trí thứ k trong dãy(x,k nhập từ bàn phím)
#include<stdio.h>
int main(){
    int a[100],n,x,k;

    printf("Nhap n: ");
    scanf("%d",&n);

    printf("Nhap cac phan tu cua mang: \n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    printf("Nhap x va k: ");
    scanf("%d%d",&x,&k);
    
    n++;

    for(int i=n;i>=k;i--){
        a[i]=a[i-1];
    }

    a[k-1]=x;
    
    printf("Sau khi chen %d vao vi tri thu %d\n",x,k);
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}