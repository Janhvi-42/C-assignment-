#include <stdio.h>

int main() {
    int day;

    // using scanf coz we have to take value from the user //
    printf("Enter a number between (1-7)to get the day of the week: ");
    scanf("%d", &day);

    //write down the syntax for the switch case //
    switch (day) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
        default:
            printf("Invalid input! Please enter a number between 1 and 7 to get proper output.\n");
    }

    return 0;
}




output:-

  Enter a number between (1-7) to get the day of the week:1
  Monday

Enter a number between (1-7) to get the day of the week:9

  Invalid input! Please enter a number between 1 and 7 to get proper output.
  
  
  
