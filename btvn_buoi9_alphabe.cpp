//nhap vào mang n chuoi theo thu tu alphabe

#include<stdio.h>
#include<string.h>

int main(){
	char s[5][20],t[20];
	int i,j;
	
	printf("\n nhap 5 chuoi bat ki:\n");
	for(i=0;i<5;i++)
		scanf("%s",s[i]);
		
	for(i=1;i<5;i++){
		for(j=1;j<5;j++){
			if(strcmp(s[j-1],s[j])>0){
				strcpy(t,s[j-1]);
				strcpy(s[j-1],s[j]);
				strcpy(s[j],t);
			}
			
		}
	}	
	 printf("\n sap xep thu tu cac chuoi:\n");
	 for (i=0;i<5;i++)
	 	printf("\n%s",s[i]);
	
	return 0;
}


