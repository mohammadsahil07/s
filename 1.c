#include<stdio.h>
int swap(int* a,int* b){
    int temp=*a;
    *a=*b;
    *b=temp;
    return 0 ;
}
int main()
{
    int a,b;
    printf("please enter two numbers");
    scanf("%d%d",&a,&b);
    
    printf("a=%d and b=%d",a,b);
    swap(&a,&b);
     printf("a=%d and b=%d",a,b);

return 0;
}