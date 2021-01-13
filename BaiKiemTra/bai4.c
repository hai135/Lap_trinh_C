/*
- n là số phần tử của cấp số cộng
- d là công sai của cấp số cộng đó
- n0 là phần tử đầu tiên của cấp số cộng
*/
#include<stdio.h>
int main(){
    int n,n0,d,s=0;
    scanf("%d%d%d",&n,&d,&n0);

    for(int i=n0,dem=0;dem<n;i+=d,dem++){
        s+=i;
    }
    printf("%d",s);
}
