#include<stdio.h>

int main(){
	int n;
	printf("nhap so n:\n");
	scanf("%d",&n);
	int m=n;
	int T=0;
	
	while(m){
		T=T*10 + m%10;
		m/=10;	
	
	}
	
	if(T == n) printf("%d la so thuan nghich",n);
	else printf("%d khong la so thuan nghich",n);

	return 0;
}
