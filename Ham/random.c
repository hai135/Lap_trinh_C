#include<stdio.h>
int main(){
    srand(time(NULL)); // xoa random theo 1 khung time
    int x = rand()%21; //random tu 0 -> 20
    printf("%d", x);
}
