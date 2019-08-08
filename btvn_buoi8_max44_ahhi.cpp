#include<stdio.h>

void nhap(int a[4][4]){
	for(int i = 0; i < 4; i++) {
		for(int j=0;j<4;j++) {
		printf("nhap a[%d][%d]= ",i,j);
		scanf("%d",&a[i][j]);
		}		
	}
}
		
int tong_hang_co_gia_tri_lon_nhat(int a[4][4]){
	int max = 0;
	for(int i = 0; i < 4; i++){
		int tong = 0;
		for(int j = 0; j < 4; j ++){
			tong += a[i][j];
		}
		if(tong > max) {
			max = tong;
		};
	}
	printf("\nTong max la : %d \n", max);
}
	
void xuat(int a[4][4]){
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){	
			printf("%d ",a[i][j]);
		}
	printf("\n");
	}
}	

int main(){
	int a[4][4];
	nhap(a);
	tong_hang_co_gia_tri_lon_nhat(a);
	xuat(a);
	return 0;
}
	
		
