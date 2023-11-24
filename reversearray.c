#include<stdio.h>
void reverse(int arr[100],int n){
    for(int i=1;i<= n/2;i++){
        int temp= arr[i];
        arr[i]=arr[n-i+1];
        arr[n-i+1]=temp;
    }
    for(int i=1;i<=n;i++){
            printf("%d  ",arr[i]);
        }
}
int main()
{
    int arr[10],n;
    printf("Please enter the number of terms in array ");
    scanf("%d",&n);
    printf("please enter the array ");
    for(int i=1;i<=n;i++){
            scanf("%d",&arr[i]);
        
    }
    for(int i=1;i<=n;i++){
       
            printf("%d  ",arr[i]);
       
    }
     printf("\n");

    reverse(arr,n);
return 0;
}