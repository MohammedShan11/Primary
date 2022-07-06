#include<stdio.h>
int main(){
    int choice;
    float num1,num2,result;
    printf("Enter two number:\n");
    scanf("%f%f",&num1,&num2);
    printf("1 for addition\n2 for substraction\n3 for multiplication\n4 for division\n enter any of the choice:");
    scanf("%d",&choice);
    switch(choice){
        case 1:result=num1+num2;
        printf("result is %f",result);
        break;
        case 2:result=num1-num2;
        printf("result is %f",result);
        break;
        case 3:result=num1*num2;
        printf("result is %f",result);
        break;
        case 4:result=num1/num2;
        printf("result is %f",result);
        break;
        default:printf("invalid input");
        break;
    }

}