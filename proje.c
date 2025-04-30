#include <stdio.h>
#include <stdbool.h>

int main() {
    int userInput;

    printf("How long do you want your array to be (1-20)?\n");

    while (true) {
        int result = scanf("%d", &userInput);

        if (result != 1) {
            printf("Invalid input! Please enter a number.\n");

            // Clear the input buffer (consume all characters until newline)
            while (getchar() != '\n');

            continue;
        }

        if (userInput <= 0 || userInput > 20) {
            printf("The size of the array must be minimum 1 and maximum 20!!\n");
            continue;
        }

        break;
    }

    int myArr[userInput]; // Use the valid size here

    printf("You entered a valid size: %d\n", userInput);

    

    return 0;
}
