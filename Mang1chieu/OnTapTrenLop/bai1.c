#include<stdio.h>
int main(){
    int a[100],n;
    printf("Nhap n: ");
    scanf("%d",&n);

    printf("Nhap cac phan tu cua mang\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("In nguoc lai\n");
    for(int i=n-1;i>=0;i--){
        printf("%d ",a[i]);
    }
}