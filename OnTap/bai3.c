#include<stdio.h>
int main(){
    int a,b,schan=0,sle=0;
    printf("Nhap a,b: ");
    scanf("%d%d",&a,&b);
    for(int i=a;i<=b;i++){
        if(i%2==0){
            schan++;
        }else{
            sle++;
        }
    }
    printf("Trong khoang %d - %d co %d so chan va %d so le",a,b,schan,sle);
}