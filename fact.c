#include<stdio.h>
int print(int n){
        if(n==0){return 0;}
        print(n-1);
        printf("%d  ",n);
        
}
int main()  {
        int n;
        printf("please enter the number ");
        scanf("%d",&n);
        print(n);
        return 0;

}