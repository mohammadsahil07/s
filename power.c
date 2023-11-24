#include<stdio.h>
int power(int n,int p){
    int a=n;
    for(int i=1;i<p;i++){
        n=n*a;
    }
    return n;

}

int main()
{
    int n,p;
    printf("please enter the numeber and the power of the number ");
    scanf("%d %d",&n,&p);
    int a= power(n,p);
    printf("%d",a);

return 0;
}