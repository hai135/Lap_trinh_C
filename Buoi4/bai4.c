//Nhập 4 số nguyên x1, y1, x2, y2 lần lượt là tọa độ 2 quân xe trên bàn cờ vua, kiểm tra chúng có ăn được nhau không
#include<stdio.h>
int main()
{
    int x1,x2,y1,y2;
    printf("Nhap toa do 2 quan xe: ");
    scanf("%d%d%d%d",&x1,&x2,&y1,&y2);
    printf("%s",(x1==x2||y1==y2)?"An duoc":"Khong an duoc");
}