//Nhập số n là số nguyên dương. Liệt kê các ước  của n
#include <stdio.h>
int main()
{
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            printf("%d ", i);
        }
    }
}