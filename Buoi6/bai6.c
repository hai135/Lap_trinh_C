//Nhập số b là số nhị phân, in ra dạng thập phân của số b
#include <stdio.h>
int main()
{
    int n, i = 0;
    int dec = 0;
    printf("Nhap so nhi phan: ");
    scanf("%d", &n);
    while (n != 0)
    {
        dec += (n % 10) * pow(2, i);
        i++;
        n = n / 10;
    }
    printf("%d", dec);
}