#include<stdio.h>

int main(){
	int a,b,c,min,max;
	printf("nhap so a:");
	scanf("%d",&a);
	
	printf("nhap so b:");
	scanf("%d",&b);
	
	printf("nhap so c:");
	scanf("%d",&c);
	
    min=max=a;
    
    if(b>max)
		max=b;
	if(c>max)
		max=c;
	printf("so lon nhat la %d\n",max);	
	if(b<min)
		min=b;
	if(c<min)
		min=c;
	printf("so nho nhat la %d\n",min);
		
	return 0;

}
