#include <stdio.h>
int main()
{
    

    /* 
    -khai báo mảng

            <kiểu dữ liệu> <tên mảng>[số lượng phần tử];
    
    - ví dụ:    
    
            int a[5];

    - lấy giá trị phần tử ở vị trí i :    

            a[i]
    
    - lấy phần tử thứ 3 trong mảng: 

            a[2]

    - chỉ số của mảng bắt đầu từ 0

    - Gán giá trị cho các phần tử trong mảng
        + Dùng vòng lặp, khởi tạo giá trị i=0 , điều kiện dừng là i < số phần tử trong mảng,
        bước nhảy là 1 

        vd :  
            for(int i=0;i<<số phần tử>;i++){
                scanf("%d",&a[i]);
            }



     */

    int a[100],n;

    printf("Nhap so phan tu trong mang: ");
    scanf("%d",&n);

    printf("Nhap cac phan tu trong mang:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    printf("Cac phan tu trong mang:\n");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    // Sắp xếp các phần tử trong mảng
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(a[i] > a[j])
            {
                int temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
            }
        }
    }
    // In mảng sau khi sắp xếp
    for(int i=0; i<n; i++)
    {
        printf("%4d",a[i]);
    }

}

/*
    - sắp xếp mảng

        for(int i=0; i<n-1; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                if(a[i] > a[j])
                {
                    int temp = a[i];
                        a[i] = a[j];
                        a[j] = temp;
                }
            }
        }
*/