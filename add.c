
#include<stdio.h>
int main() {
    printf("Name - Mohammad Sahil\n");
    float x,y,sum;
    printf("please enter the first numbers : \n");
    scanf("%f",&x);
    printf("please enter the second numbers : \n");
    scanf("%f",&y);
    sum=x+y;
    printf("%0.2f + %0.2f = %0.2f",x,y,sum);
    return 0;
}
