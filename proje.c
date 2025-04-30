#include <stdio.h>
#include <stdbool.h>

int main()
{
    int userInput;

    printf("How long do you want your array to be (1-20)?\n");

    while (true)
    {
        int result = scanf("%d", &userInput);

        if (result != 1)
        {
            printf("Invalid input! Please enter a number.\n");

            // Clear the input buffer (consume all characters until newline)
            while (getchar() != '\n')
                ;

            continue;
        }

        if (userInput <= 0 || userInput > 20)
        {
            printf("The size of the array must be minimum 1 and maximum 20!!\n");
            continue;
        }

        break;
    }

    int myArr[userInput]; // Use the valid size here

    printf("You entered a valid size: %d\n", userInput);

    int size = sizeof(myArr) / sizeof(myArr[0]); //  to get the size of the Array

    for (int i = 0; i < size; i++)
    {
        printf("Write the number for the index %d:\n", i);

        while (scanf("%d", &myArr[i]) != 1)
        {
            printf("Invalid input, Please enter an integer!\n");
            while (getchar() != '\n')
                ;
        }
        printf("\nArray content: ");
        for (int j = 0; j <= i; j++)
        {
            printf("%d ", myArr[j]);
        }
    }

    return 0;
}
