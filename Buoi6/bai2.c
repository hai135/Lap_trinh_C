//Nhập 1 dãy số cho đến khi gặp số 0 thì dừng lại.
#include<stdio.h>
int main()
{
    int n;
    printf("Nhap den khi n=0: \n");
    do{
        scanf("%d",&n);
    }while(n!=0);
}