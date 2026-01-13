#include <stdio.h>

int main(void) {

    int counter;
    int operand;
    int operation;
    int result;
    int endfunction = 0;

    while (endfunction == 0) {

        printf("Input a number:\n");
        scanf("%d", &counter);

        printf("Choose operation: 1 mul, 2 div, 3 add, 4 sub, 5 exit\n");
        scanf("%d", &operation);

        if (operation == 5) {
        endfunction = 1;

        }


        printf("Input another number:\n");
        scanf("%d", &operand);

        switch (operation) {
            case 1:
                result = counter * operand;
                break;
            case 2:
                result = counter / operand;
                break;
            case 3:
                result = counter + operand;
                break;
            case 4:
                result = counter - operand;
                break;
            default:
                printf("Invalid option\n");
                continue;
        }

        printf("Result is: %d\n", result);
    }

    return 0;
}
