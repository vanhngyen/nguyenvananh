//Nhap tu bàn phím den khi nhap trúng so chan thì dung
#include<stdio.h>

int main(){
	int n;
		printf("nhap n:\n");
		scanf("%d",&n);

	do{
		printf("nhap so vao:\n");
		scanf("%d",&n);
	}while(n%2!=0);
		if(n%2==0)
		printf("day la so chan!");	
	return 0;
}
