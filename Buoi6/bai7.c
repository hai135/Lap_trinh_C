//Viết chương trình tìm bội số chung nhỏ nhất của hai số nguyên dương nhập vào từ bàn phím.
#include <stdio.h>
int main()
{
    int a, b;
    printf("Nhap 2 so:");
    scanf("%d%d", &a, &b);
    int max = (a > b) ? a : b;
    //cú pháp điều_kiện?giá_trij1:giá_trị_2;
    for (int i = max; i <= (a * b); i++)
    {
        if (i % a == 0 && i % b == 0)
        {
            printf("BCNN = %d", i);
            break;
        }
    }
}