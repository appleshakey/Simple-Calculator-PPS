#include <stdio.h>
#include <stdlib.h>

void cal(int x, int y, char op){
    int res;
    switch(op)
    {
    case '+':
        res = x+y;
        printf("Sum of %d and %d is %d", x, y, res);
        break;
    case '-':
        res = x-y;
        printf("Difference of %d and %d is %d", x, y, res);
        break;

    case  '*':
        res = x*y;
        printf("Product of %d and %d is %d", x, y, res);
        break;
    case '/':
        if(y!=0){
            res = x/y;
            printf("Quotient of %d divided by %d is %d", x, y, res);}
        else{
            printf("Divisor cannot be zero.");
        }
        break;

    case '%':
            res = x%y;
            if(y != 0){
                res = x%y;
                printf("Remainder of %d divided by %d is %d", x, y, res);}
            else{
                printf("The divisor cannot be zero.");
            }
            break;
    default:
        printf("Please enter a valid input.");
         }

}

int main()
{
   char oper;
    int a;
    int b;


    printf("Please enter the first integer :: \n");
    scanf("%d", &a);

    printf("Please enter the second integer :: \n");
    scanf("%d", &b);

    printf("Please enter the operator :: \n");
    scanf(" %c", &oper);
    cal(a,b,oper);
    return 0;
}
