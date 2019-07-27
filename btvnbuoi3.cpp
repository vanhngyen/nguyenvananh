#include<stdio.h>
#include<math.h>

int main(){
	int a,b,c,x,dt,x1,x2;
	printf("nhap so a:\n");
	scanf("%f",&a);
	printf("nhap so b:\n");
	scanf("%f",&b);
	printf("nhap so c:\n");
	scanf("%f",&c);
	
	if(a==0){
		printf("phuong trinh bac 1");
	}else if(dt<0){
		printf("phuong trinh vo nghiem");	
	}else if(dt==0){
		printf("phuong trinh co nghiem kep x==-b/(2*a)",x);
	}else{
		dt==b*b-4*a*c;
		x1==(-b+sqrt(dt)/2*a);
		x2==(-b-sqrt(dt)/2*a);
		printf("phuong trinh co 2 nghiem phan biet la ",x1,x2);
		printf("%f",x1);
		printf("%f",x2);
	}
	return 0;
}
