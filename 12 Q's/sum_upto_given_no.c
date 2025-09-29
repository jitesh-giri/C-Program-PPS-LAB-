//. WAP to print the sum of all numbers up to a given number.(by loop use for)
#include<stdio.h>
int main(){
    int n1,i;
    int sum=0;
    printf("enter no 1: ");
    scanf("%d",&n1);

    for (i= 0; i <= n1; i++)
    {
        sum=sum+i;   /* code */
        printf("sum=%d\n",sum);
    }
    
    printf("sum=%d\n",sum);

    return 0;
}