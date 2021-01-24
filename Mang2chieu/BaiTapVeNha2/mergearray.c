//gop 2 mang thanh 1 tu be den lon
#include<stdio.h>
int n;
int main(){
    int a[50], b[50], c[100], choice, n, m, k = 0;
    while(choice!=4){
        printf("\n1. Nhap 2 day so nguyen theo chieu tang dan\n");
        printf("2. Ghep 2 day so nguyen\n");
        printf("3. In 3 day so\n");
        printf("4. Ket Thuc\n");
        puts("Nhap lua chon:\n");
        scanf("%d", &choice);
        switch(choice){
            case 1:
                puts("Nhap so p.tu cua mang 1:");
                scanf("%d", &n);
                puts("Nhap day so nguyen tang dan 1:");
                for(int i = 0; i<n; i++){
                    scanf("%d", &a[i]);
                }
                
                puts("Nhap so p.tu cua mang 2:");
                scanf("%d", &m);
                puts("Nhap day so nguyen tang dan 2:");
                for(int i = 0; i<m; i++){
                    scanf("%d", &b[i]);
                }
                break;
            case 2: ;
            int i = 0, j = 0;
            while(i<=n||j<=m){
                while(j<=m){
                    if(a[i]<b[j]){
                        c[k] = a[i];
                        i++;
                        k++;
                        break;
                    }
                    else{
                        c[k] = b[j];
                        j++;
                        k++;
                        break;
                    }
                }
            }
            break;
            case 3:
            printf("\nMang 1: \n");
            for(int i = 0; i<n; i++){
                printf("%d ", a[i]);
            }
            printf("\nMang 2: \n");
            for(int i = 0; i<n; i++){
                printf("%d ", b[i]);
            }
            printf("\nMang 3: \n");
            for(int i = 0; i<k-1; i++){
                printf("%d ", c[i]);
            }
            break;
            default :
            choice = 4;
            break;
        }
    }
    return 0;
}
