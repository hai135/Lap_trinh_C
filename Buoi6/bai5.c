//.Nhập 2 số nguyên d, c lần lượt là số dòng, cột của hình chữ nhật.
//  In ra hình chữ nhật đó dạng đặc, rỗng với các dấu *
#include <stdio.h>
int main()
{
    int dong, cot;
    scanf("%d%d", &dong, &cot);
    //dang đặc
    for (int i = 1; i <= dong; i++)
    {
        for (int j = 1; j <= cot; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
    //dạng rỗng
    for (int i = 1; i <= dong; i++)
    {
        for (int j = 1; j <= cot; j++)
        {
            if (i == 1 || i == dong || j == 1 || j == cot)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}