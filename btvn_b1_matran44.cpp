#include<stdio.h>

int main(){
	int arr[4][4];
		for(int i=0;i<4;i++)
		{
			for(int j=0;j<4;j++)
			{
			printf("nhap ar[%d][%d]=\n",i,j);
			scanf("%d",&arr[i][j]);
			}		
		}	
		
	for(int i=0;i<4;++i)
	{
		for(int j=0;j<4;++j)
		{
		printf("%5d",arr[i][j]);
		}
		printf("\n");
	}
		
	int tbc=0;
		tbc=( (arr[0][0]) + (arr[1][1]) + (arr[2][2]) + (arr[3][3]) )/4;
		printf("trung binh cong duong cheo la:%d\n",tbc);
			
	
	
	return 0;
	

}
