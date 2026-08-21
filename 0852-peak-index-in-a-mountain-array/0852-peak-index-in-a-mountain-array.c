int peakIndexInMountainArray(int* arr, int arrSize) {
for(int i = 1; i < arrSize - 1; i++)
    {
        if(arr[i] < arr[i - 1])
        {
            return i - 1;
        }

        if(arr[i - 1] < arr[i] && arr[i + 1] < arr[i])
        {
            return i;
        }
    }

    return -1;
}
    