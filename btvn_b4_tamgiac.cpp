#include<stdio.h>
#include<math.h>

int main(){
	int a,b,c;
	float C,P,S;
	
	bool check = true;
	
	while(check == true){

		printf("nhap so a:\n");
		scanf("%d",&a);
		printf("nhap so b:\n");
		scanf("%d",&b);
		printf("nhap so c:\n");
		scanf("%d",&c);
	
	
		if(a+b>c && a+c>b && b+c>a){
			check = false;
			C=a+b+c;
			P=(double)C/2;
			S=sqrt((P*(P-a)*(P-b)*(P-c)));
			printf(" day la 3 canh cua tam giac:%d\n");
			printf("chu vi la:%f\n",C);
			printf("dien tich la:%f\n",S);
		} else {
			printf("Nhap sai nhap lai!\n");
		}
	}
	return 0;
}
