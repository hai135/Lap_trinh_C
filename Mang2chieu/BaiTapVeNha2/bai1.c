#include <stdio.h>
int rotate180(int a[][256],int b[][256],int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(a[i][j]!=b[n-1-i][n-1-j])
                return 0;
        }
    }
    return 2;
}
int rotateLeft(int a[][256],int b[][256],int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(a[i][j]!=b[n-1-j][i])
                return 0;
        }
    }
    return 3;
}
int rotateRight(int a[][256],int b[][256],int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(a[i][j]!=b[j][n-1-i])
                return 0;
        }
    }
    return 1;
}
int main(void) {
	
	int t,kq[100],x=0;
    scanf("%d",&t);
    for(int k=0; k<t; k++)
    {
        int n;
        scanf("%d",&n);
        int a[256][256],b[256][256],flag=0;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                scanf("%d",&b[i][j]);
            }
        }
        if(rotate180(a,b,n))
        {
            flag=2;
        }
        else if(rotateLeft(b,a,n))
        {
            flag=3;
        }
        else if(rotateRight(b,a,n))
        {
            flag=1;
        }
        else
        {
            flag=0;
        }
        kq[x++]=flag;
    }
    for(int i=0; i<t; i++)
    {
        printf("#%d %d\n",i+1,kq[i]);
    }
	return 0;
}