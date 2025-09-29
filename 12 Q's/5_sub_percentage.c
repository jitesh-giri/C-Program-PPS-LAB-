//AP that accepts the marks of 5 subjects and finds the sum and percentage marks obtained by the student.
#include<stdio.h>
int main(){
    int a,b,c,d,e,sum;
    float percentage;

    printf("Enter 1st subject marks");
    scanf("%d",&a);

    printf("Enter 2nd subject marks");
    scanf("%d",&b);

    printf("Enter 3rd subject marks");
    scanf("%d",&c);

    printf("Enter 4th subject marks");
    scanf("%d",&d);

    printf("Enter 5th subject marks");
    scanf("%d",&e);

    sum=a+b+c+d+e;
    percentage=(float)sum/5;

    printf("sum=%d\n",sum);
    printf("percentage=%.2f\n",percentage);

    return 0;

}