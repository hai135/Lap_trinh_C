//7.Nhập a,b,c là 3 cạnh của 1 tam giác, tính diện tích của tam giác đó ( gợi ý công thức hê rông ).
#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c;
    printf("Nhap 3 canh cua tam giac : ");
    scanf("%f%f%f",&a,&b,&c);
    float p,s;
    p=(a+b+c)/2;
    s=sqrt(p*(p-a)*(p-b)*(p-c));
    printf("Dien tich cua tam giac = %.2f",s);
}