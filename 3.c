#include<stdio.h>
void prime(int n){
    int a;
    if(n==2){printf("number is prime");}
    else{for(int i=2;i<n;i++){if(n%i==0){a=0;break;}
    else{a=1;}}
    if(a==1){printf("number is prime");}
    else {printf("number is not prime");}}
}
int main()
{
    int n;
    printf("please enter the number ");
    scanf("%d",&n);
    prime(n);
return 0;
}