#include<stdio.h>
int main(){
    int a,b,dem=0;
    printf("Nhap a,b: ");
    scanf("%d%d",&a,&b);
    for(int i=a;i<=b;i++){
        int s=0;
        for(int j=1;j<=i;j++){
            if(i%j==0)s++;
        }
        if(s==2)dem++;
    }
    printf("co %d so nguyen to",dem);
}