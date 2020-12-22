/*Nhập n tính:
- Tổng từ 1 đến n
- n! (nờ giai thừa)
Tổng S = 1 + (1/2!) + (1/3!) + (1/4!) + .... + (1/n!)*/
#include <stdio.h>
int main()
{
    int n, sum = 0, giaiThua = 1;
    float s = 0;
    printf("Nhap n:");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        sum += i;
        giaiThua *= i;
        s += (float)1 / giaiThua;
    }
    printf("Tong tu 1 den n = %d\n", sum);
    printf("Giai thua cua n = %d\n", giaiThua);
    printf("Tong tu 1 den 1/n! = %.2f", s);
}