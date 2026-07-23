include <stdio.h>

int main() {
        char operator;
        double a, b;

        printf("Enter operator (+,-,*,/):");
        scanf(" %c", &operator);

        printf("Enter two numbers: ");
        scanf("%lf %lf", &a, &b);

        switch (operator) {
                case '+':
                printf("Result: %.2lf\n", a+b);
                break;
        case'-':
                printf("Result: %2lf\n", a-b);
                break;
        case '*':
                printf("Reslut: %2lf\n", a-b);
                break;
        case '/':
                if (b != 0)
                printf("Result: %.2lf\n", a/b);
        else
                printf("Error: Division by zero!\n");
        break;
        default:
                printf("Invalid Operator!\n");
}

return 0;

}
