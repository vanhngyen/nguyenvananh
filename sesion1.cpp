#include<stdio.h>

int main(){
	int x=18;
	float y;
	double z;
	char c;
	//y=3.14;
	
	//z=4.55+2;
	//z=y+3.33;
	printf("nhap x=\n");
	scanf("%d",&x);
	printf("nhap y=\n");
	scanf("%f",&y);
	printf("nhap z =\n");
	scanf("%lf",&z);
 
    printf("xin chao\n nam nay toi %d tuoi\n",x);
    printf("gia tri cua z= %lf\n",z);
    
    printf ("y=%f\n",y);
    return 0;
}
