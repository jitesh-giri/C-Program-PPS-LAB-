//WAP that accepts the temperature in Centigrade and converts into Fahrenheit using the formula C/5=(F-32)/9.for f=
#include<stdio.h>
int main(){
    float c,f;

    printf("enter temp in centigrade");
    scanf("%f",&c);

    f=1.8*c + 32;

    printf("temperature in fehrenhite=%.2f",f);

    return 0;

}