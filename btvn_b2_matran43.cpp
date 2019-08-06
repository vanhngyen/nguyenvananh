#include<stdio.h>

int main(){
	int a[4][3],b[4][3];
	int c[4][3];
	int d[4][3];
	for (int i=0;i<4;++i)
	{
		for(int j=0;j<3;++j)
		{
			printf("nhap a[%d][%d]:\n",i,j);
			scanf("%d",&a[i][j]);
			printf("nhap b[%d][%d]:\n",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	
	for (int i=0;i<4;++i)
	{
		for(int j=0;j<3;++j)
		{
			c[i][j]=a[i][j]+b[i][j];
			printf("%8d",c[i][j]);
		}	
		printf("\n");
	}
		printf("\n");
		
	for (int i=0;i<4;++i)
	{
		for(int j=0;j<3;++j)
		{
			d[i][j]=a[i][j]-b[i][j];
			printf("%8d",d[i][j]);
		}
		printf("\n");	
	}
		   	
	return 0;
}
