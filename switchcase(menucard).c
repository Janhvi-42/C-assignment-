#include <stdio.h>

int main() {
    int menucard;

    // using scanf bcoz we've to take values from the user//
    printf("press the digit you want to order\nPress 1 for vadapav\nPress 2 for idlisambar\nPress 3 for dahivaada\nPress 4 for misal\nPress 5 for dosa\nPress 6 for coffee\nPress 7 for tea\nPress 8 for milkshake\n\nEnter your order digit to get your order:-");
    scanf("%d", &menucard);

    // write down syntax of switch case //
    switch (menucard) {
        case 1:
            printf("vadapav\n");
            break;
        case 2:
            printf("idlisambar\n");
            break;
        case 3:
            printf("dahivada\n");
            break;
        case 4:
            printf("misal\n");
            break;
        case 5:
            printf("dosa\n");
            break;
        case 6:
            printf("coffee\n");
            break;
        case 7:
            printf("tea\n");
            break;
        case 8:
            printf("milkshake\n");
        default:
            printf("Invalid input! Please enter a number between 1 and 8 to get proper order.\n");
    }

    return 0;
}

output:-

press the digit you want to order
Press 1 for vadapav
Press 2 for idlisambar
Press 3 for dahivaada
Press 4 for misal
Press 5 for dosa
Press 6 for coffee
Press 7 for tea
Press 8 for milkshake

Enter your order digit to get your order:-6
coffee


=== Code Execution Successful ===

