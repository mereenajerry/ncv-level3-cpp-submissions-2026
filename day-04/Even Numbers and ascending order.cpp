#include <iostream>
#include <algorithm>
using namespace std;

// Function prototypes
void populateArray(int arr[], int size);
int countEvenNumbers(int arr[], int size);
void displayOddNumbers(int arr[], int size);
void sortArray(int arr[], int size);
void displayArray(int arr[], int size);

int main()
{
    const int SIZE = 5;
    int numbers[SIZE];

    // Populate array
    populateArray(numbers, SIZE);

    // Display all values
    cout << "\nValues in the array: ";
    displayArray(numbers, SIZE);

    // Count even numbers
    int evenCount = countEvenNumbers(numbers, SIZE);
    cout << "\nNumber of even numbers: " << evenCount << endl;

    // Display odd numbers
    cout << "\nOdd numbers in the array: ";
    displayOddNumbers(numbers, SIZE);

    // Sort array
    sortArray(numbers, SIZE);

    // Display sorted values
    cout << "\nSorted values: ";
    displayArray(numbers, SIZE);

    return 0;
}

// Function to populate array
void populateArray(int arr[], int size)
{
    cout << "Enter 5 numbers:\n";

    for (int i = 0; i < size; i++)
    {
        cout << "Number " << i + 1 << ": ";
        cin >> arr[i];
    }
}

// Function to count even numbers
int countEvenNumbers(int arr[], int size)
{
    int count = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
        {
            count++;
        }
    }

    return count;
}

// Function to display odd numbers
void displayOddNumbers(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 != 0)
        {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}

// Function to sort array
void sortArray(int arr[], int size)
{
    sort(arr, arr + size);
}

// Function to display array
void displayArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
