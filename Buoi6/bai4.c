//Liệt kê các số có 2 chữ số sao cho giá trị của số đó gấp 2 lần tổng chữ số của số đó
#include <stdio.h>
int main()
{
    for (int i = 10; i <= 36; i++)
    {
        if (i == ((i % 10) + (i / 10)) * 2)
        {
            printf("%d", i);
        }
    }
}