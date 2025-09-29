//AP to find the greatest of three numbers.
#include<stdio.h>
int main(){
    int a,b,c;

    printf("Enter three values");
    scanf("%d%d%d",&a,&b,&c);

    if(a>b && a>c){
        printf("a is greatest a=%d",a);
    }
    else if(b>c){
        printf("b is greatest b=%d",b);
    }
    else{
        printf("c is greatest c=%d",c);
    }

    return 0;
}