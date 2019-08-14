#include<stdio.h>
#include<math.h>
void nhap(int x,int y){
	printf("nhap so x:\n");
	scanf("%d",&x);
	printf("nhap so y:\n");
	scanf("%d",&y);
}

int tong(int x,int y){
	int s;
	s=x+y;
	return s;
}

int hieu(int x,int y){
	int t;
	t=x-y;
	return t;
}

int nhan(int x,int y){
	int p;
	p=x*y;
	return p;
}

float chia(int x,int y){
	float f;
	f=(float)x/(float)y;
	return f;
}

int main(){
	int x,y;
	printf("nhap so x:\n");
	scanf("%d",&x);
	printf("nhap so y:\n");
	scanf("%d",&y);
	tong(x,y);
	printf("tinh tong:%d\n",tong(x,y));
	hieu(x,y);
	printf("tinh hieu:%d\n",hieu(x,y));
	nhan(x,y);
	printf("tinh nhan:%d\n",nhan(x,y));
	chia(x,y);
	printf("tinh chia:%f", chia (x,y));
	
	return 0;
}
