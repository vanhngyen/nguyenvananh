#include<stdio.h>

int main(){
		int n;
		printf("nhap so n:\n");
		scanf("%d",&n);
		int f0 = 1,f1 = 1;
		int fn = 1;
		
		for(int i = 2;i <= n;i++){
			f0 = f1;
			f1 = fn;
			fn = f0 + f1;
		}
		printf("so fibonacci thu n = %d",fn);
			
		
	return 0;
}
