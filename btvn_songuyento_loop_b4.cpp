#include<stdio.h>
#include<math.h>

int main(){
	int n;
	printf("nhap mot so bat ki:\n");
	scanf("%d",&n);
	
	if(n<2){
	printf("khong phai so nguyen to :%d\n",n);
	
	}
	int count=0;
	for(int i=2;i<=sqrt(n);i++){
	if(n%i==0){
	count++;
	
	}
	}
	if(count==0){
	printf("so nguyen to:%d\n",n);
	}else{
		printf("khong phai so nguyen to :%d\n",n);
	}
	return 0;
}
