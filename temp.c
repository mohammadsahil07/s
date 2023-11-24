#include<stdio.h>
void temperature(int temp){
    if(temp<=15){printf("cold");}
    else if(temp>15 && temp<25){printf("normal");}
    else if(temp>=25){printf("hot");}
}
int main()
{
    float temp;
    printf("please enter the temperature ");
    scanf("%f",&temp);
    temperature(temp);

return 0;
}