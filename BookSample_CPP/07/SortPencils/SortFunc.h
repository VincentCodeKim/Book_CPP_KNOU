#include  "SwapFunc.h"

// bubble sort algorithm
template <class T> void sort(T arr, int size)
{
    for (int i=0; i < size-1; i++)
        for (int j=0; j < size-i-1; j++)
            if (arr[j] > arr[j+1])
                swapValues(arr[j], arr[j+1]);
}
