//1. In ra giá trị lớn nhất và vị trí của nó
#include<stdio.h>
int main(){
    int a[100][100],imax=0,jmax=0,dong,cot;

    printf("Nhap so dong va so cot: ");
    scanf("%d%d",&dong,&cot);

    printf("Nhap cac phan tu cua mang: \n");
    for(int i=0;i<dong;i++){
        for(int j=0;j<cot;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int max = a[0][0];
    for(int i=0;i<dong;i++){
        for(int j=0;j<cot;j++){
            if(max<a[i][j]){
                max=a[i][j];
                imax=i;
                jmax=j;
            }
        }
    }

    printf("Phan tu max trong mang la %d o vi tri i = %d j = %d",max,imax,jmax);
}