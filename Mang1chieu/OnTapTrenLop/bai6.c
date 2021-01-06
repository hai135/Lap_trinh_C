/*
6. Nhập mảng n phần tử
 tạo 1 menu 4 chức năng
	1. Thêm 1 phần tử vào vị trí thứ k
	2. Sửa 1 phần tử ở vị trí k
	3. Xóa 1 phần tử ở vị trí k
	4. kết thúc chương trình
*/
#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<conio.h>
int main(){
    int a[100],n,chon,x,k;
    printf("Nhap n: ");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    while(1){
        system("cls");

        printf("1. Them 1 phan tu o vi tri k\n");
        printf("2. Sua 1 phan tu o vi tri k\n");
        printf("3. Xoa 1 phan tu o vi tri k\n");
        printf("4. Ket thuc\n");
        printf("\t Ban chon : ");

        scanf("%d",&chon);

        switch(chon){
            case 1:
                printf("Nhap gia tri va vi tri them: ");
                scanf("%d%d",&x,&k);

                for(int i=n-1;i>=k;i--){
                    a[i+1]=a[i];
                }

                a[k]=x;
                n++;

                printf("Mang sau khi them\n");
                for(int i=0;i<n;i++){
                    printf("%d ",a[i]);
                }
                printf("\n");

                break;
            case 2:
                printf("Nhap gia tri va vi tri muon sua: ");
                scanf("%d%d",&x,&k);
                a[k]=x;

                printf("Mang sau khi sua\n");
                for(int i=0;i<n;i++){
                    printf("%d ",a[i]);
                }
                printf("\n");
                break;
            case 3:
                printf("Nhap vi tri xoa: ");
                scanf("%d",&k);

                for(int i=k;i<n-1;i++){
                    a[i]=a[i+1];
                }

                n--;

                printf("Mang sau khi xoa\n");
                for(int i=0;i<n;i++){
                    printf("%d ",a[i]);
                }
                break;
            case 4:
                exit(0);
            default:
                printf("Chon tu 1->4\n");
        }
        system("pause");

    }
}
