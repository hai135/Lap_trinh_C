//Viết chương trình nhập vào điểm toán, điểm lý và điểm hoá. Tính tổng điểm và điểm trung bình rồi hiển thị kết quả.
#include<stdio.h>
int main(){
    float dToan,dLy,dHoa;
    printf("Nhap lan luot diem Toan, Ly, Hoa: ");
    scanf("%f%f%f",&dToan,&dLy,&dHoa);
    printf("Tong diem 3 mon la: %f\n",dToan+dLy+dHoa);
    printf("Diem trung binh mon: %f",(dToan+dLy+dHoa)/3);
}