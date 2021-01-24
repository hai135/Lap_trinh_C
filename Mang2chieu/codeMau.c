#include <stdio.h>
#include <stdlib.h>

int main() {

    int a[100][100];    int m,n;
    printf("nhap so dong, so cot: ");
    scanf("%d%d",&m,&n);
    for(int i=0; i<m; i++)
    {
    	for(int j=0;j<n;j++)
    	{
    		printf("Nhap a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
		}
	}

//	int b[10000];
//	int k=0;
//	for (int i = 0;i< m;i++)
//    {
//        for (int j =0; j < n; j++)
//        {
//            b[k]=a[i][j];
//            k++;
//        }
//    }
//    for (int i = 0; i < k-1; i++)
//    {
//        for (int j = i+1; j< k;j++)
//        {
//            if (b[i]>b[j]){
//                int tmp = b[i];
//                b[i] = b[j];
//                b[j] = tmp;
//            }
//        }
//    }
    //gan 1 chieu sang 2 chieu
//    k=0;
//    for (int i = 0;i< m;i++)
//    {
//        for (int j =0; j < n; j++)
//        {
//            a[i][j]=b[k];
//            k++;
//        }
//    }
//
//    for(int i=0; i<m; i++)
//    {
//    	for(int j=0;j<n;j++)
//    	{
//    		printf("%4d",a[i][j]);
//		}
//		printf("\n");
//	}

    // tim min, max
    int min = a[0][0],max= a[0][0];
    for (int i = 0; i<m;i++)
    {
        for (int j = 0; j< n;j++)
        {
            if (a[i][j] > max)
            {
                max = a[i][j];
            }
            if (a[i][j] < min)
            {
                min = a[i][j];
            }
        }
    }

    //xoa 1 dong trong mang
    int d;
    printf("nhap dong muon xoa: "); scanf("%d",&d);
    for (int i = d-1; i<m;i++)
    {
        for (int j = 0; j< n; j++)
        {
            a[i][j]=a[i+1][j];
        }
    }
    m--;

    for(int i=0; i<m; i++)
    {
    	for(int j=0;j<n;j++)
    	{
    		printf("%4d",a[i][j]);
		}
		printf("\n");
	}

	//tim snt
	for (int i=0;i<m;i++)
    {
        for (int j=0;j<n;j++)
        {
            int f=1;
            
            for (int x = 2; x < a[i][j]; x++)
            {
                if (a[i][j]==2)
                break;
                if (a[i][j] % x == 0)
                {
                    f=0;
                    break;
                }
            }
            if (f == 1)
            {
                printf("snt %4d",a[i][j]);
            }
        }
    }

    //tinh tong 2 mang
    int b[100][100];
    int c[100][100];
    printf("nhap so dong, so cot: ");
    scanf("%d%d",&m,&n);
    for(int i=0; i<m; i++)
    {
    	for(int j=0;j<n;j++)
    	{
    		printf("Nhap a[%d][%d]=",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	for (int i=0; i<m;i++)
    {
        for (int j = 0; j < n; j++)
        {
            c[i][j]= a[i][j]+b[i][j];
        }
    }
    return 0;
}