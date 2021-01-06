#include<stdio.h>
int main(){
    int n,a[100];
    printf("Nhap n: ");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                int tmp=a[i];
                a[i]=a[j];
                a[j]=tmp;
            }
        }
    }

    for(int i=n-1;i>=0;i--){
        if(a[i]!=a[n-1]){
            printf("%d ",a[i]);
            break;
        }
    }

    for(int i=0;i<n;i++){
        if(a[i]!=a[0]){
            printf("%d ",a[i]);
            break;
        }
    }
}
