//viet ham so lon nhat trong mang
#include<stdio.h>

int max(int a[],int n){
	int max =a[0];
		for (int i=1;i<n;i++){
			if(max<a[i]){
		     	max=a[i];
		     }
		}
	return max;
}

void nhap(int a[],int n){
	for(int i=0;i<n;i++){
		printf("nhap phan tu a[%d]:\n",i);
		scanf("%d",&a[i]);
	}
}

int main(){
	int n;
		printf("nhap so n:\n");
		scanf("%d",&n);
	int a[n];
		nhap(a,n);
		printf("max la:%d\n",max(a,n));
	
	return 0;
}
