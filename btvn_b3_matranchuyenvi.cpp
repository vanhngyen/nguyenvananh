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

	int sum;
		for (int i=0;i<4;++i)
		{
			for(int j=0;i<j;++j)
			{		
			sum = a[i][j];
         	a[i][j] = a[j][i];
        	a[j][i] = sum;
      }
   }
   
  // printf("Ma tran chuyen vi la:\n");
   for (int i = 0; i < 3; i++)
   {
      printf("\n");
      for (int j = 0; j < 4; j++)
	   {
	   	printf("Ma tran chuyen vi la:\n");
         printf("%d\t", a[j][i]);
      }
   }
	return 0;
}
