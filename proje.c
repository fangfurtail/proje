#include <stdio.h>
#include <stdbool.h>

void recursiveSort(int arr[], int index);
void arrayPrint(int arr[] , int size);

int main()
{
    int userInput;

    printf("How long do you want your array to be (1-20)?\n");

    while (true)    // A while loop to get a valid number for the array
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

    int myArr[userInput]; // Use the valid size here to create the array

    printf("You entered a valid size: %d\n", userInput);

    int size = userInput;
    // int size = sizeof(myArr) / sizeof(myArr[0]); //  to get the size of the Array

    for (int i = 0; i < size; i++)  // Getting user input to fill the array.
    {
        printf("Write the number for the index %d:\n", i);

        while (scanf("%d", &myArr[i]) != 1)
        {
            printf("Invalid input, Please enter an integer!\n");
            while (getchar() != '\n')
                ;
        }
        printf("\nArray content: ");
        arrayPrint(myArr,size);
    }

    recursiveSort(myArr,userInput);  

    printf("Final Array is : ");
    arrayPrint(myArr,size);

    return 0;
}





void recursiveSort(int arr[], int n) {
    if (n == 1) return;

    for (int i = 0; i < n - 1; i++) {
        if (arr[i] < arr[i + 1]) {
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }

    // Printing
    printf("\nStep (n=%d): ", n);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    recursiveSort(arr, n - 1); // recursive call
}



void arrayPrint(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

