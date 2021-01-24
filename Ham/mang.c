//gop 2 mang thanh 1 tu be den lon
#include<stdio.h>
//random
#include <time.h>
void NhapMang (int n, int a[])
{
    for (int i =0; i < n; i++)
    {
        a[i]=rand()%20;
    }
}

void InMang (int n, int a[])
{
    for (int i =0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}
//Bai 2:
//int laSNT (int n)
//{
//    if (n<=1)
//        return 0;
//    if (n==2)
//        return 1;
//    else
//    {
//        for (int i = 2; i<= n/2;i++)
//        {
//            if (n%i == 0)
//                return 0;
//        }
//        return 1;
//    }
//
//}

int main(){
    int  a[100];
    int n;
    int b[100];
    scanf("%d",&n);
    NhapMang(n,a);
    InMang(n,a);
    NhapMang(n,b);
    InMang(n,b);
//    int a,b;
//    scanf("%d%d",&a,&b);
//    for (int i=a;i<=b;i++)
//    {
//        if (laSNT(i) == 1)
//            printf("%d ",i);
//    }
//    printf("\n");
    return 0;
}

