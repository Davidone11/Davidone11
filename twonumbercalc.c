#include <stdio.h>

int main()
{
    char operators;
    double first, second;
    printf("Enter the Operator ( +, -, *, /) :");
    scanf("%c",&operators);

    printf("Enter the two numbers one by one pls :");
    scanf("%lf %lf",&first,&second);

    switch (operators)
    {
    case '+':
        printf("%lf + %lf = %lf\n",first,second,(first+second));
        break;
        
    case '-':
        printf("%lf - %lf = %lf\n",first,second,(first-second));
        break;

    case '*':
        printf("%lf * %lf = %lf\n",first,second,(first*second));
        break;

    case '/':
        if( second != 0.0 )
            printf("%lf / %lf = %lf\n",first,second,(first/second));
        else
            printf("Divide by zero situation, undefined...sorry!");
        break;

    
    default:
        printf("Invalid Operator");
    }
    
    return 0;
}