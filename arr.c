#include<stdio.h>
#include<stdlib.h>

int main()
{   int n;
   
    printf("please enter the number of elements in array ");
    scanf("%d",&n);
    int arr[]= malloc(n*4);
    int *ptr=arr;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        
    }
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
       
    }


return 0;
}