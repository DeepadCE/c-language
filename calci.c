#include<stdio.h>
int main(){
    float a,b;
    char oper;
    printf("welcome to basic calculator:\n");
    printf("enter two numbers:\n");
    scanf("%f %f",&a,&b);
    printf("enter an operand(+,-,*,/)\n");
    scanf("%c",&oper);
    switch(oper){
        case '+':
        printf("%f+%f=%f",a,b,a+b);
        break;
         case '-':
        printf("%f-%f=%f",a,b,a-b);
        break;
         case '*':
        printf("%f*%f=%f",a,b,a*b);
        break;
         case '/':
        printf("%f/%f=%f",a,b,a/b);
        break;
         default:
        printf("enter a valid operand");
        
    }
    return 0;

}