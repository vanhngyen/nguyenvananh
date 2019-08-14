#include<stdio.h>


void nhap(int a[100],int n){
		for(int i=0;i<10;i++){
		printf("nhap vao so thu a[%d]:\n",i);
		scanf("%d",&a[i]);
	}
}


int so_nguyen_dao(int a[100],int n){
	for(int i=0;i<5;i++){
		int temp=a[i];
		a[i]=a[9-i];
		a[9-i]=temp;
	}
}

void xuat(int a[100],int n){
	for(int i=0;i<10;i++){
		printf("%d",a[i]);
	}
}

int main(){
	int a[10];
	int n;
	printf("nhap so n:\n");
	scanf("%d",&n);
	nhap(a,n);
	printf("mang vua nhap la:\n");
	xuat(a,n);
	so_nguyen_dao(a,n);
	printf("mang dao la:\n");
	xuat(a,n);
	return 0;
	}


