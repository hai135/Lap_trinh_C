/*8. Nhập số nguyên a là số bất kì, tính số mũ a^1, a^2, a^3 và
in ra màn hình kết quả ở những dòng tiếp theo
ví dụ:
Dòng 1: a = 3
Dòng 2: a^1 = 3
Dòng 3: a^2 = 9
Dòng 4:  a^3 = 27.*/
#include<stdio.h>
#include<math.h>
int main ()
{
    int a;

    printf("Nhap a: ");
    scanf("%d",&a);
    //pow(x,y)=x^y
    printf("a = %d\n", a);
    printf("a^1 = %d\n", a);
    printf("a^2 = %f\n", pow(a,2));
    printf("a^3 = %f\n", pow(a,3));
}