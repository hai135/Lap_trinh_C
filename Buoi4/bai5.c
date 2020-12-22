//Viết chương trình giải phương trình bậc 2 ax^2+bx+c=0
#include<stdio.h>
#include<math.h>
int main()
{
   float a,b,c,denta,x1,x2;
   printf("Nhap a,b,c: ");
   scanf("%f%f%f",&a,&b,&c);
   if(a==0){
       if(b==0){
           if(c==0){
               printf("phuong trinh co vo so nghiem");
           }else{
               printf("Phuong trinh vo nghiem");
           }
       }else{
           printf("Phuong trinh co 1 nghiem la %f",-c/b);
       }
   }else{
       denta=b*b-4*a*c;
       if(denta>0){
           x1=(-b+sqrt(denta))/(2*a);
           x2=(-b-sqrt(denta))/(2*a);
           printf("Phuong trinh co 2 nghiem phan biet\n x1 = %f\n x2 = %f",x1,x2);
       }else if (denta==0){
           x1=(-b)/(2*a);
           printf("phuong trinh co 1 nghiem kep la %f",x1);
       }else{
           printf("Phuong trinh vo nghiem");
       }
   }
}
