{
    for (int i = 1; i < n; i++)  // Start from the second element
    {
        int key = arr[i];        // The element to be placed in the sorted portion
        int j = i - 1;

        // Move elements of arr[0..i-1] that are greater than key to one position ahead
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }

        // Place the key at the correct position
        arr[j + 1] = key;
    }
}