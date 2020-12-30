#include <stdio.h>
#include <stdlib.h>

int main (){
    int a[100],n;
    scanf("%d",&n);

    for (int i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }

    int chan = 0, le = 0;
    for (int i = 0; i < n; i++){
        if (a[i] % 2 == 0){
            chan++;
        }
        else
        {
            le++;
        }
    }

    while(chan != le){
        n++;
        scanf("%d",&a[n-1]);
        if ( a[n-1] % 2 == 0){
            chan++;
        }
        else
        {
            le++;
        }
    }

    return 0;
}