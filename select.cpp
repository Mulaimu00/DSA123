#include<iostream>

void selection_sort(int a[], int length);

int main()
{
    int a[]={56,57,89,34,23,1,9};
    int lenght=7;

    selection_sort(a, lenght);

    for(int i=0; i<lenght; i++)
    {
        std::cout<<"a["<<i<<"]="<<a[i]<<'\n';
    }
    return 0;
}

void selection_sort(int a[], int length)
{
    for(int i = 0; i < (length-1); i++)
    {
        int min=i;
        for(int j = (i+1); j < length; j++)
        {
            if(a[j] < a[min])
            {
                min = j;
            }
        }
        if(min!=i)
        {
            int temp = a[i];
            a[i] = a[min];
            a[min] = temp;
        }
    }
}