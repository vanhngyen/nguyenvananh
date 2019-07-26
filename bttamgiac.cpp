#include<stdio.h>
#include<math.h>

int main(){
	int a,b,c,cv;
	double p,s;
	printf("nhap so a:\n");
	scanf("%d",&a);
	printf("nhap so b:\n");
	scanf("%d",&b);
	printf("nhap so c:\c");
	scanf("%d",&c);
	
	if(a+b>c && a+c>b && b+c>a){
		cv=a+b+c;
		p=cv/2;
		s=sqrt((p*(p-a)*(p-b)*(p-c)));
		printf("chu vi tam giac la %d\n",cv);
		printf("dien tich ta giac la %lf\n",s);
	}else{
		printf("khong phai la tam giac");
		
	}
	return 0;

}
