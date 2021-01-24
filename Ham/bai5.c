#include<stdio.h>
int main(){
    int a, b;
    puts("Nhap 2 so la khoang a, b:");
    scanf("%d%d", &a, &b);
    srand(time(NULL));
    int tmp = b - a;
    int x = (rand()%tmp)+a;
    printf("%d", x);
}

