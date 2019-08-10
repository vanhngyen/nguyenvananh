//nhâp vào 2 chuoi s1,s2 .kiêm tra xem chuôi 1 có chua chuoi 2 khong?

#include<stdio.h>
#include<string.h>

int main(){
	char s1[9]="12345",s2[9]="123";
	printf("%s\n",strstr(s1,s2));
	
	if( strstr(s1,s2) == NULL){
		printf("chuoi 1 khong chua chuoi 2:\n");
		return 0;
	}
		printf("chuoi 1 chua chuoi 2:\n");
		return 0;
}
