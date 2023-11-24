#include<stdio.h>
int main()
{
    int n,a=0;
    printf("please enter the number ");
    scanf("%d",&n);
    int n1=n;
    int r,sum=0;
    while(n!=0){
        r=n%10;
    
        sum=(10*sum)+r;
        n=n/10;}
    
    if(n1==sum){printf("number is palindrome" );}
    else{printf("not apalindrome nuber ");}
return 0;
}