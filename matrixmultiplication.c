#include<stdio.h>
int main()
{
 int i,j,k;
 float mat1[3][3], mat2[3][3], mat3[3][3];

 printf("Enter elements of first matrix:\n");
 for(i=0;i< 3;i++)
 {
   for(j=0;j< 3;j++)
  {
   printf("mat1[%d][%d]=",i,j);
   scanf("%f", &mat1[i][j]);
  }
 }
 
 printf("Enter elements of second matrix:\n");
 for(i=0;i< 3;i++)
 {
  for(j=0;j< 3;j++)
  {
   printf("mat2[%d][%d]=",i,j);
   scanf("%f", &mat2[i][j]);
  }
 }
 
 for(i=0;i< 3;i++)
 {
  for(j=0;j< 3;j++)
  {
   mat3[i][j] = 0;
   for(k=0;k< 3;k++)
   {
    mat3[i][j] = mat3[i][j] + mat1[i][k]*mat2[k][j];
   }
  }
 }
 
 printf("Multiplied matrix is:\n");
 for(i=0;i< 3;i++)
 {
  for(j=0;j< 3;j++)
  {
   printf("%f\t", mat3[i][j]);
  }
  printf("\n");
 }
 return 0;
}
