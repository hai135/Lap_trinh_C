#include <stdio.h>
int main(){
    int ngay,thang,nam,flag=1;
    //kiem tra ngay hop le khong
    do{
    	printf("Nhap ba so lan luot la ngay, thang, nam: ");
    	scanf("%d%d%d",&ngay,&thang,&nam);
    	if(nam<=0){
            flag=0;
        }
    
    	if(thang<13&&thang>0)
        {		
	    	if(thang==2){
	    		if(nam%400==0 || (nam%100!=0 && nam%4==0)){
	    			if(ngay>29||ngay<1){
	    				flag=0;
					}
				}else {
					if(ngay>28||ngay<1)flag=0;
				}
			}
			else if (thang==4||thang==6||thang==9||thang==11){
	        	if (ngay>30)
	            	flag=0;
				}
	    	else
	        	if (ngay>31)
	            flag=0;
		}else flag=0;
		if(flag==0)printf("Ngay thang nam khong hop le\n");
	}while(flag==0);
    printf("Ngay ke tiep %d/%d/%d la ngay ",ngay,thang,nam);
    ngay++;
    
    //Kiem tra xem ngay ke tiep co hop le
    flag=1;     
    if (thang==2){
        if (nam%400==0 || (nam%100!=0 && nam%4==0)){ //Nam nhuan
            if (ngay>29)
                flag=0;
        }
        else
            if (ngay>28)                            //Nam khong nhuan
                flag=0;
    }
    else if (thang==4||thang==6||thang==9||thang==11){
        if (ngay>30)
            flag=0;

    }
    else
        if (ngay>31)
            flag=0;
    
    //Neu ngay nhap la ngay cuoi thang
    if (flag==0){
        ngay=1;
        if (thang==12){
            thang=1;
            nam++;
        }
        else thang++;
    }
    printf("%d/%d/%d\n",ngay,thang,nam);
    
    return 0;
}