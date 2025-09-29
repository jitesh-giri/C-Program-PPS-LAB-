//WAP that checks whether the two numbers entered by the user are equal or not. 
#include<stdio.h>
int main(){
    int a,b;

    printf("enter two value :");
    scanf("%d%d",&a,&b);

    if(a==b){
        printf("no. are equal :");
    }
    else{
        printf("no. are not equal");
    }

    return 0;
}
