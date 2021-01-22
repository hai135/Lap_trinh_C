#include <stdio.h>
int main()
{
    int a[100][100];
    int m,n,l=0;
    int tmp;
    printf("nhap so dong,so cot :");
    scanf("%d%d",&m,&n);

    for(int i = 0; i<m; i++)
    {
        for(int j = 0; j<n; j++)
        {
            printf("nhap a[%d][%d] :",i,j);
            scanf("%d",&a[i][j]);
        }
    }
//    for(int i = 0; i<m; i++)
//    {
//        for(int j = 0; j<n; j++)
//        {
//            printf("%4d",a[i][j]);
//        }
//        printf("\n");
//    }
//    int b=0,c=0;
//    printf("nhap 2 dong can doi cho :");
//    scanf("%d%d",&b,&c);
//    if(b<m && c<m)
//    {
//        for(int i = 0 ; i < n; i++)
//        {
//            tmp = a[b][i];
//            a[b][i] = a[c][i];
//            a[c][i] = tmp;
//
//        }
//        for(int i = 0; i<m; i++)
//        {
//            for(int j = 0; j<n; j++)
//            {
//                printf("%d\t",a[i][j]);
//            }
//            printf("\n");
//        }
//
//
//    }
 //liet ke tan suat xhien cua cac ptu trong mang
 int max = a[0][0];
 int min = a[0][0];
 int tmp[100];
     for(int i = 0; i<m; i++)
    {
        for(int j = 0; j<n; j++)
        {
        if(a[i][j] > max)
        {
            max = a[i][j];
        }
        if(a[i][j] < min)
        {
             min = a[i][j];
        }
    int dem = 0;
    for(int i = min; i < max ; i ++){

      dem++;
    }

   for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        printf("%d%d\n",a[i][j],dem);
    }
   }
        }
    }

}
