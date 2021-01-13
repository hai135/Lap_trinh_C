#include<stdio.h>
int main()
{
    int s,t,a,b,m,n,app[100],or[100],soTao=0,soCam=0;
    scanf("%d%d%d%d%d%d",&s,&t,&a,&b,&m,&n);
    for(int i=0;i<m;i++){
        scanf("%d",&app[i]);
    }

    for(int i=0;i<n;i++){
        scanf("%d",&or[i]);
    }

    for(int i=0;i<m;i++){
        if(app[i]+a<=t&&app[i]+a>=s){
            soTao++;
        }
    }

    for(int i=0;i<n;i++){
        if(or[i]+b>=s&&or[i]+b<=t){
            soCam++;
        }
    }
    printf("%d\n%d",soTao,soCam);
}
