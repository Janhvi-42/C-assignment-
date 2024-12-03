#include <stdio.h>

int main() {
    int num1, num2, num3;

    // Ask the user to input three numbers
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Find the greatest number
    if (num1 >= num2 && num1 >= num3) {
        printf("The greatest number is: %d\n", num1);
    } else if (num2 >= num1 && num2 >= num3) {
        printf("The greatest number is: %d\n", num2);
    } else {
        printf("The greatest number is: %d\n", num3);
    }

    return 0;
}

output:-
  Enter three numbers: 13
17
26
The greatest number is: 26


=== Code Execution Successful ===
