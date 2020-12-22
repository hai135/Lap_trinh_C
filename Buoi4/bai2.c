//Nhập tuổi của một người, kiểm tra xem người đó có đủ tuổi bầu cử không, và sau đó in thông báo tương ứng. (Độ tuổi bầu cử là >= 18)
#include<stdio.h>
int main(){
    int tuoi;
    printf("Nhap tuoi: ");
    scanf("%d",&tuoi);
    printf("%s",tuoi>=18?"Du tuoi bau cu":"Khong du tuoi bau cu");
}