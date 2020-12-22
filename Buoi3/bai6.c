//Nhập a,b là 2 cạnh của tam giác vuông, tìm cạnh huyền của tam giác vuông đó.
#include<stdio.h>
#include<math.h>
int main(){
    float a,b;
    printf("Nhap 2 canh goc vuong: ");
    scanf("%f%f",&a,&b);
    printf("Do dai canh huyen: %f",sqrt(a*a+b*b));
}