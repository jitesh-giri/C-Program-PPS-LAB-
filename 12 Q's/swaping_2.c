//WAP that swaps values of two variables using a third variable. 
#include<stdio.h>
int main(){
    int a,b,c;

    printf("enter first value");
    scanf("%d",&a);

    printf("enter second value");
    scanf("%d",&b);

    printf("a=%d\n",a);
    printf("b=%d\n",b);

    c=a;
    a=b;
    b=c;

    printf("swaping a=%d\n",a);
    printf("swaping b=%d\n",b);

    return 0;

}