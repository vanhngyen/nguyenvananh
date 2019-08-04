#include<stdio.h>
#include<math.h>

int main(){
	int n;
	int a[100];
	printf("nhap phan tu:\n");
	scanf("%d", &n);		
 	for(int i = 0; i < n; i++){
 		int check = 1;
 		while(check == 1) {
 			printf("nhap phan tu %d : ", i + 1);
			scanf("%d", &a[i]);
			int dem = 0;
			for(int j = 0; j < i; j ++) {
				if(a[i] == a[j]) {
					dem ++;
					break;
				}
			}
			if(dem == 0) break;
		}
	}
	return 0;
}
