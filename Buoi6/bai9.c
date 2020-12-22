//Nhập số nguyên dương n>2, in dãy Fibonacci đến số thứ n.
#include <stdio.h>
int main()
{
    int n, a = 1, b = 1; //a la i-2, b la i-1
    printf("Nhap n: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if (i == 1 || i == 2)
        {
            printf("%d ", 1);
        }
        else
        {
            int s = a + b;
            printf("%d ", s);
            a = b;
            b = s;
        }
    }
}