//Nhap tu b�n ph�m den khi nhap tr�ng so chan th� dung
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
