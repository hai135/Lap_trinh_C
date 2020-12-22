/*
Viết một chương trình  hiển thị một menu có các lựa chọn để thực hiện 
các phép toán cơ bản của hai số a, b(công, trừ, nhân, chia)
*/
#include<stdio.h>
int main(){
    int a,b,chon;
    printf("Nhap 2 so: ");
    scanf("%d%d",&a,&b);
    printf("\t\tMENU\n");
    printf("1. Tinh tong 2 so\n2. Tinh hieu 2 so\n3.Tinh tich 2 so\n4.Tinh thuong 2 so\n\nBan chon ==>  ");
    scanf("%d",&chon);
    switch (chon)
    {
    case 1:
        printf("Tong %d va %d la %d",a,b,a+b);
        /* code */
        break;
    case 2:
        printf("Hieu %d va %d la %d",a,b,a-b);
        /* code */
        break;
    case 3:
        printf("Tich %d va %d la %d",a,b,a*b);
        /* code */
        break;
    case 4:
        printf("Thuong %d va %d la %f",a,b,(float)a/b);
        /* code */
        break;
    default:
        printf("Lua chon khong hop le");
        break;
    }
}