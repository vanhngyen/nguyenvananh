#include<stdio.h>
int main() {
   int n,i;
   float t;
   int a[10];
   n = t = 0;
   for(i = 1; i < 10; i++){
      printf("nhap phan tu:\n");
      scanf("%d",&a[i]);
       n += a[i];
   }
    
   	t=(float)n/i;
   printf("Gia tri trung binh cua mang la: %f", t);   
   
   return 0;
}
