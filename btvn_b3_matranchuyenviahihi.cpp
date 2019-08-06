#include<stdio.h>

int main(){
	int a[4][3];
	for (int i=0;i<4;++i)
	{
		for(int j=0;j<3;++j)
		{
			printf("nhap ma tran a[%d][%d]:\n",i,j);
			scanf("%d",&a[i][j]);
		}
	}

	printf("ma tran vua nhap la :\n");
	for (int i=0;i<4;++i){
		printf("\n");
		for(int j=0;j<3;++j){
			printf("%d\t",a[i][j]);
			}
		}	
	
   	printf("\n");
    printf("Ma tran chuyen vi la:\n");
    for (int i = 0; i < 3; i++){
      	printf("\n");
      	for (int j = 0; j < 4; j++){
         	printf("%d\t", a[j][i]);
      }
   }
	return 0;
}
