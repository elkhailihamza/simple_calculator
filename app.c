#include<stdio.h>
#include<string.h>

int main() {
    char *operators = "+-*/";
    char operator;

    double history[5];
    int option;
    int i = 0;

    double num1;
    double num2;

    double result;

    while (1)
    {   
        while(i > 5) {
            printf("\nEnter an equation: ");
            scanf("%lf", &num1);
            scanf(" %c", &operator);
            scanf("  %lf", &num2);

            if(operator == operators[0]) {
                result = num1 + num2;
                history[i] = result;
                i++;
            } 
            else if(operator == operators[1]) {
                result = num1 - num2;
                history[i] = result;
                i++;
            } 
            else if (operator == operators[2]) {
                result = num1 * num2;
                history[i] = result;
                i++;
            } 
            else if (operator == operators[3] && num2 != 0) {
                result = num1 / num2;
                history[i] = result;
                i++;
            } 
            else {
                printf("Err");
                return 1;
            }
        printf("\n%2.lf %c%2.lf = %2.lf\n", num1, operator, num2, result);
    }
        }

    return 0;
}
