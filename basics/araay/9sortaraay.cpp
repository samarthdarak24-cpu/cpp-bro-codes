/*foreach loop #include <iostream>

int main()
{
    int array[] = {10, 1, 9, 2, 8, 3, 7, 4, 6, 5};

    // foreach loop: gets each value from array
    for(int element : array)
    {
        std::cout << element << " ";
    }

    return 0;
}*/#include <iostream>

// Function declaration
void sort(int array[], int size);

int main()
{
    // Unsorted array
    int array[] = {10, 1, 9, 2, 8, 3, 7, 4, 6, 5};

    // Find number of elements
    int size = sizeof(array) / sizeof(array[0]);

    // Sort the array
    sort(array, size);

    // Print sorted array
    for(int element : array)
    {
        std::cout << element << " ";
    }

    return 0;
}


// Bubble Sort function
void sort(int array[], int size)
{
    int temp; // temporary variable for swapping

    // Number of passes
    for(int i = 0; i < size - 1; i++)
    {
        // Compare neighboring elements
        for(int j = 0; j < size - i - 1; j++)
        {
            // If left element is smaller than right
            if(array[j] < array[j + 1])
            {
                // Swap the two values
                temp = array[j];

                array[j] = array[j + 1];

                array[j + 1] = temp;
            }
        }
    }
}