/*2.Viết chương trình C cho phép người sử dụng chọn câu trả lời (giống như chương trình thi trắc nghiệm).
Cách nào khai báo một biến và gán giá trị số nguyên là đúng trong các câu lệnh C sau?
a. int 1x=10;
b. int x=10;
c. float x=10.0f;
d. string x=”10″;
Chọn ký tự để trả lời: c
Lựa chọn không đúng!*/
#include<stdio.h>
int main()
{
    printf("Cach nao de khai bao 1 bien va gan gia tri so nguyen la dung\n");
    printf("a. int 1x=10;\n");
    printf("b. int x=10;\n");
    printf("c. float x=10.0f;\n");
    printf("d. string x=10;\n");
    char chon;
    scanf("%c",&chon);

    switch(chon)
    {
    case 'a':
    case 'c':
    case 'd':
        printf("Lua chon sai");
        break;
    case 'b':
        printf("Lua chon dung");
        break;
    default:
        printf("Lua chon khong hop le");
    }
}
