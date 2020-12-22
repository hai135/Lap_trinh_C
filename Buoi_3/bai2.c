//Viết chương trình nhập vào độ C (Celsius) và chuyển sang độ F (Fahrenheit). Biết rằng C/5 = (F-32)/9.
#include<stdio.h>
int main(){
    float c,f;
    printf("Nhap do C: ");
    scanf("%f",&c);
    f=(c*9/5)+32;
    printf("%.3f do C la %.3f do F",c,f);
}