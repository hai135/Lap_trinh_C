//Nhập 3 số kiểm tra xem 3 số có là 3 góc của 1 tam giác không
#include<stdio.h>
int main(){
    int a,b,c;
    printf("Nhap 3 so: ");
    scanf("%d%d%d",&a,&b,&c);
    if(a+b+c==180&&a>0&&b>0&&c>0&&a<180&&b<180&&c<180){
        printf("3 so la 3 goc cua tam giac");
    }
    else{
        printf("3 so khong la 3 goc cua tam giac");
    }
}