#include<stdio.h>
int main(){
    int a[100],b[100]={0},n,max=0;
    printf("Nhap n:");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        b[a[i]]++;
    }

    for(int i=0;i<n-1;i++){
        if(max<b[i]+b[i+1])
        {
            max=b[i]+b[i+1];
        }
    }

    printf("Output: %d",max);

}