//1.Nhập tháng và năm, in ra số ngày tương ứng có trong tháng
#include<stdio.h>
int main()
{
    //31 ngày 1,3,5,7,8,10,12
    //30 ngày 4,6,9,11
    int nam, thang;
    scanf("%d%d",&thang,&nam);
    switch(thang)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("co 31 ngay ");
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        printf("co 30 ngay ");
        break;
    case 2:
        if(nam%400==0 || (nam%4==0 && nam%100!=0))
        {
            printf("co 29 ngay ");
        }
        else
        {
            printf("co 28 ngay ");
        }
        break;
    default:
        printf("Thang khong hop le");
    }
}