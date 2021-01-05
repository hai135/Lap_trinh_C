/*
nhập một mảng n phần tử. in ra màn hình các phần tử có giá trị lớn hơn trung bình cộng của mảng
*/

#include<stdio.h>
int main(){
    int a[100],n,s=0;

    printf("Nhap so phan tu trong mang: ");
    scanf("%d",&n);

    printf("Nhap cac phan tu trong mang:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Cac phan tu trong mang:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

    for(int i=0;i<n;i++)
    {
        s+=a[i];
    }    
    printf("\nCac phan tu lon hon trung binh cong la:\n");
    float avg=(float)s/n;
    for(int i=0;i<n;i++)
    {
        if(avg<a[i])
            printf("%d ",a[i]);
    }    
}