#include<stdio.h>
int main(){
    int a[100],n,tang=1,giam=1;

    printf("Nhap so phan tu trong mang: ");
    scanf("%d",&n);

    printf("Nhap cac phan tu trong mang:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(int i=0;i<n-1;i++){
        if(a[i]<a[i+1])giam=0;
        if(a[i]>a[i+1])tang=0;
    }

    if(tang==1||giam==1){
        printf("Sorted");
    }else{
        printf("Unsorted");
    }
}