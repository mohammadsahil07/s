#include<stdio.h>
void pattern(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("*");
        }printf("\n");
    }
}
int main()
{
    int n;
    printf("please enter the number ");
    scanf("%d",&n);
    pattern(n);

return 0;
}