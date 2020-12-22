//Nhập 3 số a, b, c. In ra số lớn nhất trong 3 số
#include<stdio.h>
int main(){
    int a,b,c;
    printf("Nhap 3 so: ");
    scanf("%d%d%d",&a,&b,&c);
    printf("So lon nhat la: %d",(a>b?(a>c?a:c):(b>c?b:c)));
}