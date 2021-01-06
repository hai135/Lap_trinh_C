#include<stdio.h>
int main(){
    int n,a[100],sum=0,count=0;
    printf("Nhap n: ");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(i%2==0&&a[i]%2==1){
            sum+=a[i];
            count++;
        }
    }

    printf("Trung binh cong cac so le o vi tri chan la: %f",(float)sum/count);


}