#include<stdio.h>
#include<math.h>
int armstrong(int n){
    int n1=n,a=n,p=0,b=n;
    while(n!=0){
        n=n/10;
        p++;
    }
    int num=0,r;
    while(n1!=0){
        r=n1%10;
        printf("%d   ",r);
        int d=pow(r,p);
        num=num+d;
         printf("%d   ",num);
         n1=n1/10;
    }
    printf("%d    %d  ",num ,p);
    return num;
}
int main() n
{
    int n;
    printf("please enter the number ");
    scanf("%d",&n);

   int a= armstrong(n);
 if(a==n){
        printf("The number is armstrong ");
    }
    else{printf("the number is not armstrong ");}
   


return 0;
}