//AP that accepts marks of five subjects and finds percentage and prints grades according to the following criteria: Between 
//90-100%-Print ‘A’ 
//80-90%-Print ‘B’
//60-80%-Print ‘C’
//Below 60%-Print ‘D’
#include<stdio.h>
int main(){

    float sub1,sub2,sub3,sub4,sub5,percentage,sum;

    printf("Enter marks of maths/biology");
    scanf("%f",&sub1);

    printf("Enter marks of chemistry");
    scanf("%f",&sub2);

    printf("Enter marks of physics");
    scanf("%f",&sub3);

    printf("Enter marks of english");
    scanf("%f",&sub4);

    printf("Enter marks of computer science");
    scanf("%f",&sub5);

    sum=sub1+sub2+sub3+sub4+sub5;
    percentage=sum/5;

    printf("percentage=%f\n",percentage);

    if(percentage<=100 && percentage>=90){
        printf("A GRADE\n");
    }
    else if(percentage<90 && percentage>=80 ){
        printf("B GRADE\n");
    }
    else if(percentage<80 && percentage>=60){
        printf("C GRADE\n");
    }
    else{
        printf("D GRADE\n");
    }

    return 0;
}