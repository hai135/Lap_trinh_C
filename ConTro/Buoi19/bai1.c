// Nhập 1 dãy các số nguyên. Sử dụng con trỏ để tìm giá trị lớn nhất

#include <stdio.h>
int *timMax(int arr[], int n)
{
    int *max = arr;
    for (int i = 1; i < n; i++)
    {
        if (*max < *(max + i))
        {
            *max = *(max + i);
        }
    }
    return max;
}
int main()
{
    int arr[100], n, *max;

    printf("Nhap so phan tu: ");
    scanf("%d", &n);

    printf("Nhap cac phan tu: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", arr + i);
    }

    max = timMax(arr, n);
    printf("%d la gia tri lon nhat", *max);
}