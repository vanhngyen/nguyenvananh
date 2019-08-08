#include<stdio.h>
 void nhap(int a[], int n){
	for(int i=0; i<n;i++){
		printf("nhap phan tu a[%d]",i);
		scanf("%d",&a[i]);
	}
}

int tim_max(int a[], int n){
int max=a[0];
for(int i=0; i<n; i++){
	if(max<a[i]){
		max=a[i];	
	}
}
return max;
}

int tim_so_gan_lon_nhat(int a[],int n){
	int max=a[0];
	for(int i=0; i<n;i++){
		if(max<a[i]){
		max=a[i];
		}
	}
		int n_max=a[0];
		for(int i=1; i<n; i++){
		if(max==a[0]){
			n_max=a[1];
		}
		if(n_max < a[i] && a[i] < max){
			n_max = a[i];
		}
	}

	return n_max;
}

int main(){
	int n;
	int max;
	printf("nhap so phan tu:\n");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
	printf("nhap so phan tu:\n");
	scanf("%d",&a[i]);
}
	printf("\n phan tu lon nhat cua mang:%d\n",tim_max(a,n));
	printf("\n phan tu gan lon nhat cua mang:%d\n",tim_so_gan_lon_nhat(a,n));
	return 0;

}
