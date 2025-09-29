//AP that calculate the simple interest and compound interest. The principal amount, rate of interest and time are entered through the keyboard.
#include<stdio.h>
#include<math.h>

int main(){
    float p,r,t,rate,CI,SI,amtfinal;
    printf("enter principle amt: ");
    scanf("%f",&p);

    printf("enter rate of intrest: ");
    scanf("%f",&r);

    printf("enter time period: ");
    scanf("%f",&t);

    rate=r/100;

    amtfinal=p*(pow(1+rate,t));

    SI=p*rate*t;

    CI=amtfinal-p;

    printf("Total amount=%f\n",amtfinal);
    printf("Simple intrest=%f\n",SI);
    printf("CI=%f\n",CI);

    return 0;
}