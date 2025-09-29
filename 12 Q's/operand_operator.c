//WAP that takes two operands and one operator from the user and perform the operation and prints the result by using Switch statement.
#include<stdio.h>
int main(){
    float n1,n2;
    char opt;

    printf("enter 1st no.");
    scanf("%f",&n1);

    printf("enter 2nd no.");
    scanf("%f",&n2);

    printf("enter operator(+,-): ");
    scanf(" %c",&opt);

    switch (opt)
    {
        case  '+' :printf("%f",n1+n2);
                   break;
        case  '-' :printf("%f",n1-n2);
                   break;
    
        default   :printf("invalid");
                   break;
    }

    return 0;
}