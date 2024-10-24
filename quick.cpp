#include<iostream>
#include<utility>

void quicksort(int array[],int length);
void quicksort_recursion(int array[], int low, int high);
int partition(int array[], int low, int high);

int main() 
{
    int a[]= {24,67,45,23,17,475,230,99};
    int length = sizeof(a)/sizeof(a[0]);

    quicksort(a, length);

    std::cout << "Sorted array: ";
    for(int i=0; i<length; i++)
    {
        std::cout << a[i] << " ";
    }
    std::cout << std::endl;
}

void quicksort(int array[], int length)
{
    quicksort_recursion(array, 0, length-1);
}

void quicksort_recursion(int array[], int low, int high)
{
    if(low < high)
    {
        int pivot_index = partition(array, low, high);
        quicksort_recursion(array, low, pivot_index-1);
        quicksort_recursion(array, pivot_index+1, high);
    }
}

int partition(int array[], int low, int high)
{
    int pivot_value = array[high];

    int i = low;
    for(int j = low; j < high; j++)
    {
        if(array[j] <= pivot_value)
        {
            std::swap(array[i], array[j]);
            i++;
        }
    }

    std::swap(array[i], array[high]);
    return i;
}