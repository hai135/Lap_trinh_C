//Nhập 1 dãy số nguyên không quá 50 phần tử, đưa ra màn hình trung bình cộng các số chia hết cho 3 có trong dãy. 
#include<stdio.h>
int main(){
    int a[100],n,count=0,sum=0;

    printf("Nhap n: ");
    scanf("%d",&n);

    printf("Nhap cac phan tu cua mang: \n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]%3==0){
            count++;
            sum+=a[i];
        }
    }

    printf("Trung binh cong cac so chia het cho 3 la: %f",(float)sum/count);



}