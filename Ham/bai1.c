#include<stdio.h>
int tinh_tong(int x, int y){
    return x+y;
}
int tinh_hieu(int x, int y){
    return x-y;
}
int tinh_tich(int x, int y){
    return x*y;
}
int main(){
    int a, b;
    puts("Nhap 2 so a, b:");
    scanf("%d%d", &a, &b);
    printf("Tong =%d\n", tinh_tong(a, b));
    printf("Tong =%d\n", tinh_hieu(a, b));
    printf("Tong =%d\n", tinh_tich(a, b));
}
