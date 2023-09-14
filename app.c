#include<stdio.h>
#include<string.h>

int main() {
    char *operators = "+-*/";
    char operator;

    double history[5];

    for (int i = 0; i < 5; i++) {
        history[i] = 0;
    }
    
    int option, i = 0;

    double num1, num2, result;

    while (1) {   
        printf("\nSelect option 1 or 2: ");
        scanf("%d", &option);
        if (option == 1) {
            while(i < 5) {
                printf("\nEnter an equation: ");
                scanf("%lf %c %lf", &num1, &operator, &num2);

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
            printf("\n%.2lf %c %.2lf = %.2lf\n", num1, operator, num2, result);
            }
        } else if (option == 2) {
            printf("\n\tHistory: \n");
            for (int y = 0; y < 5; y++) {
                printf("%d.\t%.2lf\n", y + 1, history[y]);
                i--;
            }
        } else if(option == 3) {
            printf("quit");
            return 0;
        } else {
            printf("Err");
            return 1;
        }
    }

    return 0;
}
