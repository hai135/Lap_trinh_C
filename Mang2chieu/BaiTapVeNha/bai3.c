// Đổi chỗ 2 hàng bất kì trong mảng

#include<stdio.h>
int main(){
    int a[100][100],dong,cot,d1=0,d2=0;

    printf("Nhap so dong va so cot: ");
    scanf("%d%d",&dong,&cot);

    printf("Nhap cac phan tu cua mang: \n");
    for(int i=0;i<dong;i++){
        for(int j=0;j<cot;j++){
            scanf("%d",&a[i][j]);
        }
    }
    
    printf("Mang vua nhap\n");
    for(int i=0;i<dong;i++){
        for(int j=0;j<cot;j++){
            printf("%4d",a[i][j]);
        }
        printf("\n");
    }

    do{
        printf("Nhap vi tri 2 dong muon doi cho:");
        scanf("%d%d",&d1,&d2);
    }while(d1>=dong||d2>=dong||d1<0||d2<0);
        
    for(int i=0;i<cot;i++){
        int tmp=a[d1][i];
        a[d1][i]=a[d2][i];
        a[d2][i]=tmp;
    }

    printf("Mang sau khi doi cho\n");
    for(int i=0;i<dong;i++){
        for(int j=0;j<cot;j++){
            printf("%4d",a[i][j]);
        }
        printf("\n");
    }

}