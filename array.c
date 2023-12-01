#include<stdio.h>
void main()
{
    int arr[20],i,j,n;
    printf("enter the size of  an array");
    scanf("%d",&n);
    printf("enter the values");
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    printf("Give position to delete element-");
    scanf("%d",&j);
    for(i=0;i<n;i++)
    {
        if (i=j)
        {
            for(int k=j;k<n-1;k++)
            {
                arr[k-1]=arr[k];
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
}
                                                                                    
                                                                                    
                                                                                    
                                                                                    
