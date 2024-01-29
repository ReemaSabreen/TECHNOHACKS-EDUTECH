#include<stdio.h>
int main(){
printf("***************CALCULATOR***************");
double num1,num2,result;
int ch;
printf("\n ENTER THE FIRST NUMBER:");
scanf("%lf",&num1);
printf("\n ENTER THE SECOND NUMBER:");
scanf("%lf",&num2);
printf("\nSELECT ONE OPERATION");
printf("\n 1. ADDITION(+)");
printf("\n 2. SUBTRACTION(-)");
printf("\n 3. MULTIPLICATION(*)");
printf("\n 4. DIVISION(/)");
printf("\n ENTER YOUR CHOICE(1-4):");
scanf("%d",&ch);
switch(ch){
case 1:
    result = num1+num2;
    break;
case 2:
    result = num1-num2;
case 3:
    result = num1*num2;
case 4:
    if(num2 != 0){
            result = num1/num2;
    }
    else{
        printf("ERROR! DIVISION BY '0' NOT POSSIBLE");
    }
    break;
default:
    printf("INVALID CHOICE! ENTER A VALID CHOICE");
    }
    printf("RESULT: %.2lf",result);
    return 0;
}
