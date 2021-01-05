/*
nhập một mảng có n phần tử. sắp xếp tăng dần 
rồi in ra màn hình. sắp xếp giảm dần rồi in ra màn hình.
*/

#include<stdio.h>
int main()
{
    int a[100],n;

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
    // Sắp xếp các phần tử trong mảng
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(a[i] > a[j])
            {
                int temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
            }
        }
    }
    printf("\nSau khi sap xep tang dan:\n");
    // In mảng sau khi sắp xếp
    for(int i=0; i<n; i++)
    {
        printf("%4d",a[i]);
    }

    // Sắp xếp các phần tử trong mảng
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(a[i] < a[j])
            {
                int temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
            }
        }
    }
    // In mảng sau khi sắp xếp
    printf("\nSau khi sap xep giam dan:\n");
    for(int i=0; i<n; i++)
    {
        printf("%4d",a[i]);
    }
}