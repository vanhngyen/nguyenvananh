#include<stdio.h>

int main(){
	int n,i,s=0;
		printf("nhap so n:\n");
		scanf("%d",&n);
	for(int i=1;i<n;i++)

		if(n%i==0){
			s+=i;
		}	
			if(s==n){
				printf("%d la so hoan hao",n);
			}else{
				printf("%d khong la so hoan hao",n);
			}	
	return 0;
}	
		
