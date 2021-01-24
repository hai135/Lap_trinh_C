#include<stdio.h>
int in(int x){
    for(int i = 1; i<=x; i++){
        printf("%d ", i);
    }
}
int main(){
    int n;
    puts("Nhap n:");
    scanf("%d", &n);
    in(n);
}
