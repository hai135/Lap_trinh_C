//2. Liệt kê các số nguyên tố có trong mảng

#include<stdio.h>
int main(){
    int a[100][100],dong,cot;

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

    printf("Cac so nguyen to trong mang\n");
    for (int i = 0; i < dong; i++)
    {
        for (int j = 0; j < cot; j++)
        {
            int flag=1;
            
            if(a[i][j]<2)flag=0;
            
            for(int k=2;k<=a[i][j]-1;k++){

                if(a[i][j]==2)break;

                if(a[i][j]%k==0){
                    flag=0;
                    break;
                }
            }

            if(flag){
                printf("%4d",a[i][j]);
            }
        }
        
    }
    
}