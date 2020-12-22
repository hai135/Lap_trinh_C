//Nhập vào 2 số. Tính tổng, hiệu, tich, thương của 2 số đấy
#include<stdio.h>
int main(){
    float a,b;
    printf("Nhap 2 so: ");
    scanf("%f%f",&a,&b);
    printf("Tong: %f\nHieu: %f\nTich: %f\nThuong: %f",a+b,a-b,a*b,a/b);
}