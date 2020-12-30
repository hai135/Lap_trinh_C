/*
    nhập 2 mảng S và Q sắp xếp tăng dần. in ra các 
    phần tử có trong mảng S nhưng không có trong mảng Q.
*/

#include<stdio.h>
int main(){
    int S[100],Q[100],m,n;

    printf("Nhap so phan tu cua mang S va Q: ");
    scanf("%d%d",&m,&n);

    printf("Nhap cac phan tu trong mang S:\n");
    for(int i=0;i<m;i++)
    {
        scanf("%d",&S[i]);
    }

    printf("Nhap cac phan tu trong mang Q:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&Q[i]);
    }

    printf("Cac phan tu trong S nhung khong co trong Q la: ");
    for(int i=0;i<m;i++){
        int flag=1;
        for(int j=0;j<n;j++){
            if(S[i]==Q[j]){
                flag=0;
                break;
            }
        }
        if(flag==1){
            printf("%d ",S[i]);
        }
    }
}