// In ra màn hình ma trận xoáy

#include<stdio.h>
#include<math.h>
int main()
{
    int a[100][100],n,x,top=0,bottom,left=0,right;

    printf("Nhap cap n: ");
    scanf("%d",&n);
    x=1;
    bottom=right=n-1;

    while(1){
        for(int i=left;i<=right;i++){
            a[top][i]=x++;
        }
        top++;
        if(top>bottom){
            break;
        }

        for(int i=top;i<=bottom;i++){
            a[i][right]=x++;
        }
        right--;
        if(right<left){
            break;
        }

        for(int i=right;i>=left;i--){
            a[bottom][i]=x++;
        }
        bottom--;
        if(top>bottom){
            break;
        }
        
        for(int i=bottom;i>=top;i--){
            a[i][left]=x++;
        }
        left++;
        if(right<left){
            break;
        }
    }
    printf("Ma tran xoay cap %d\n",n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%4d",a[i][j]);
        }
        printf("\n");
    }
}