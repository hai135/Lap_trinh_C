#include <stdlib.h>
#include <stdio.h>

int main(){
    // cho một mảng n ptu, sắp xếp sao cho nửa đầu của mảng là các số chẵn, 
    // nửa sau của mảng là các số lẻ
    int a[100];
    int n;

    scanf("%d",&n);

    //nhap
    for (int i = 0; i< n; i++){
        scanf("%d",&a[i]);
    }

    //sap xep chan le
    //cach 1: nếu gặp số chẵn thì bỏ qua, nếu gặp số lẻ thì tìm
    // những ptu chẵn ở phía sau nó để đổi chỗ 2 ptu cho nhau.
    for (int i = 0; i < n-1; i++)
    {
        if (a[i] % 2 == 0){
                continue;
            }
        for (int j = i+1; j < n; j++){
            if (a[j] % 2 == 0){
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
    /* //cach 2: tạo một mảng phụ, nếu gặp số chẵn thì gán về đầu phía mảng phụ
    //nếu gặp số lẻ thì gán về đằng sau của mảng phụ
    int a2[100];
    int chan = 0, le = n-1;

    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            a2[chan] = a[i];
            chan++;
        }
        else
        {
            a2[le] = a[i];
            le --;
        }
        
    }
    //in mang
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a2[i]);
    }
    printf("\n");
    */

    //in mang
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}