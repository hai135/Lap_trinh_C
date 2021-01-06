#include<stdio.h>
#include<math.h>
int main(){
    int a[100],n,count=0;

    printf("Nhap n: ");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        if((int)sqrt(a[i])*(int)sqrt(a[i])==a[i]){
            count++;
        }
    }

    printf("So so chinh phuong trong mang la %d",count);
}
