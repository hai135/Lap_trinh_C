#include<stdio.h>
#include<math.h>
int main(){
    int n,sum=0,n1;
    printf("Nhap n: ");
    scanf("%d",&n);
    n1=n;
    while(n>0){
        int dv=n%10;
        sum+=pow(dv,3);
        n/=10;
    }
    if(sum==n1){
        printf("%d la so armstrong",n1);
    }
    else{
        printf("%d khong la so armstrong",n1);
    }
}