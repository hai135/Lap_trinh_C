//Nhập 2 số nguyên từ bàn phím, tính tổng, trung bình cộng của hai số đó, rồi in kết quả ra màn hình.
#include<stdio.h>
int main(){
    int a,b;
    printf("Nhap 2 so nguyen: ");
    scanf("%d%d",&a,&b);
    printf("Tong %d va %d la %d\n",a,b,a+b);
    printf("Trung binh cong cua %d va %d la %.1f",a,b,(float)(a+b)/2);
}