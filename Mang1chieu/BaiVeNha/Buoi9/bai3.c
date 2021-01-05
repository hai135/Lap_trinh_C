/*
Cho một số nguyên và một mảng một chiều các số nguyên. 
Kiểm tra xem số nguyên đã cho xuất hiện trong mảng mấy lần, ở những vị trí nào.
*/

#include<stdio.h>
int main(){
    int a[100],n,x,count=0;

    printf("Nhap n: ");
    scanf("%d",&n);

    printf("Nhap cac phan tu cua mang: \n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    printf("Nhap so nguyen: ");
    scanf("%d",&x);

    printf("%d xuat hien o vi tri :",x);
    for(int i=0;i<n;i++){
        if(a[i]==x){
            printf("%d ",i);
            count++;
        }
    }

    printf("\n%d xuat hien %d lan",x,count);


}