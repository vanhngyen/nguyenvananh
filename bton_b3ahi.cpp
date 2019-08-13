#include<stdio.h>

int main(){
	int x,y;
		printf("nhap gia tri x:\n");
		scanf("%d",&x);
		printf("nhap gia tri y:\n");
		scanf("%d",&y);
		
		int z=0;
		z=x;
		x=y;
		y=z;
		printf("gia tri cua bien x sau khi bien doi la:%d\n",x);
		printf("gia tri cua bien y sau khi bien doi la:%d\n",y);
	
	return 0;
}
