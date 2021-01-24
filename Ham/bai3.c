#include <stdio.h>
void nhapMang(int n, int a[])
{

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
}
void inMang(int n, int a[])
{
    for (int i = 0; i < n; i++)
    {
        printf("%d", a[i]);
    }
}
int main()
{
    int a[100];
    int n;
    scanf("%d", &n);
    nhapMang(n, a);
    inMang(n, a);
}
