// Nhập n là cạnh của 1 hình vuông.
//In ra hình vuông đó với các cạnh và đường chéo chính là các dấu *
#include <stdio.h>
int main()
{
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == 1 || i == n || j == 1 || j == n || i == j)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}