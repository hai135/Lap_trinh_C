/*
Nhập 1 dãy n số nguyên (0<n<30), 
in ra màn hình các số chẵn và vị trí số chẵn đó trong dãy
*/

#include<stdio.h>
int main(){
    int a[100],n;

    printf("Nhap n: ");
    scanf("%d",&n);

    printf("Nhap cac phan tu cua mang: \n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Cac so chan: \n");
    for(int i=0;i<n;i++){
        if(a[i]%2==0){
            printf("%d o vi tri %d\n",a[i],i);
        }
    }
}