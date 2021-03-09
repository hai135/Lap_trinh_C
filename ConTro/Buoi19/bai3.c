// Viết chương trình giải phương trình bậc 2, sử dụng con trỏ để truyền giá trị của nghiệm ra khỏi hàm
#include <stdio.h>
int giaiPTBac2(float a, float b, float c, float *x1, float *x2)
{
    int denta;
    if (a == 0)
    {
        if (b == 0)
        {
            if (c == 0)
            {
                return 3;
            }
            else
            {
                return 0;
            }
        }
        else
        {
            *x1 = -c / b;
            return 1;
        }
    }
    else
    {
        denta = b * b - 4 * a * c;
        if (denta > 0)
        {
            *x1 = (-b + sqrt(denta)) / (2 * a);
            *x2 = (-b - sqrt(denta)) / (2 * a);
            return 2;
        }
        else if (denta == 0)
        {
            *x1 = (-b) / (2 * a);
            return 1;
        }
        else
        {
            return 0;
        }
    }
}

int main()
{
    float a, b, c, x1, x2;
    printf("Nhap a,b,c: ");
    scanf("%f%f%f", &a, &b, &c);
    switch (giaiPTBac2(a, b, c, &x1, &x2))
    {
    case 0:
        printf("PT vo nghiem\n");
        break;
    case 1:
        printf("Phuong trinh co 1 nghiem %f\n", x1);
        break;
    case 2:
        printf("Phuong trinh co 2 nghiem %f va %f\n", x1, x2);
        break;
    case 3:
        printf("PT co vo so nghiem\n");
        break;
    }
}