#include<stdio.h>
#include<math.h>

int main(){
	int n,count;
	printf("nhap so n:\n",n);
	scanf("%d",&n);
	
	for(int i=1;i<=n;i++){
		count=0;

		for(int j=1;j <= i;j++)
			if(i%j==0)
				count++;
			if(count==2){
				printf("%d ",i);
			}	
	}	
	return 0;
}
