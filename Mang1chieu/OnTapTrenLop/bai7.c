#include<stdio.h>
int main(){
    for(int i=1;i<=9;i++){
        for(int j=1;j<=10;j++){
            printf("%2d x %2d = %2d\n",i,j,i*j);
        }
        printf("\n");
    }
}