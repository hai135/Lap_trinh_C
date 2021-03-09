// Viết chương trình dùng con trỏ để tìm số lớn nhất trong 3 số nguyên a,b,c

#include <stdio.h>
int *findMax(int a, int b, int c)
{
    int *max = &a;
    *max = (*max > b)? (*max > c ? *max : c) : (b > c ? b: c);
    return max;
}
int main()
{
    int *max, a, b, c, *p;
    scanf("%d%d%d", &a, &b, &c);
    max=findMax(a,b,c);
    printf("%d",*max);
    
}