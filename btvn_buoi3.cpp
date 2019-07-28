#include<stdio.h>
#include<math.h>

int main(){
	int a,b,c,dt,x,x1,x2;
	printf("nhap so a:\n");
	scanf("%f",&a);
	printf("nhap so b:\n");
	scanf("%f",&b);
	printf("nhap so c:\n");
	scanf("%f",&c);
	
	if(a==0){
		if(b==0){
			printf("phuong trinh vo nghiem ");
		}else{
			x==-b/(2*a);
			printf("phuong trinh co nghiem kep x==-b/(2*a)",x);	
			}
			
	}else{
		dt==b*b-4*a*c;
		if(dt==0){	
			x==-b/(2*a);
			printf("phuong trinh co nghiem kep x==-b/(2*a)",x);	
		}else if(dt<0){	
			printf("phuong trinh vo nghiem");
		}else if(dt>=0){		
			x1=(-b+sqrt(dt)/2*a);
			x2=(-b-sqrt(dt)/2*a);		
			printf("phuong trinh co 2 nghiem phan biet la ",x1,x2);
			printf("%f",x1);
			printf("%f",x2);
		}
	}
	return 0;
}
