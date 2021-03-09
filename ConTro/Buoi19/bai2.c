//Nhap chuỗi, dùng con trỏ xóa hết những kí tự trùng trong chuỗi
#include <stdio.h>
#include <string.h>

int xoaKiTu(char str[])
{
    int length = strlen(str);
    for (int i = 0; i < length; i++)
    {
        for (int k = i + 1; k < length; k++)
        {
            if (*(str + i) == *(str + k))
            {
                for (int j = i; j < length; j++)
                {
                    //str[j] = str[j + 1];
                    *(str + j) = *(str + j + 1);
                }
                i--;
                //str[length--] = '\0';
                *(str + length--) = '\0';
            }
        }
    }
}

int main()
{
    char str[100];
    printf("Nhap chuoi: ");
    gets(str);
    xoaKiTu(str);
    puts(str);
}