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
		printf("gia tri cua bien x,y sau khi bien doi la:%d,%d",x,y);
	
	return 0;
}
