#include<stdio.h>

int main(){
	int n,m,T;
	printf("nhap so n:\n",n);
	scanf("%d",&n);

	for(int i = 0; i < n; i++){
		m = i;
		T = 0;
		while(m){
			T = T*10 + m% 10;
			m/= 10;
		}
		if(T == i) printf("%d la so thuan nghich.\n", i);
	}
	return 0;
}

