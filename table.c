#include <stdio.h>

int main() {
    int number;

    // Ask the user to input a number
    printf("Enter a number to print its multiplication table: ");
    scanf("%d", &number);

    // Print the multiplication table
    printf("\nMultiplication table for %d:\n", number);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", number, i, number * i);
    }

    return 0;
}


output:-
  
Enter a number to print its multiplication table: 5

Multiplication table for 5:
5 x 1 = 5
5 x 2 = 10
5 x 3 = 15
5 x 4 = 20
5 x 5 = 25
5 x 6 = 30
5 x 7 = 35
5 x 8 = 40
5 x 9 = 45
5 x 10 = 50
