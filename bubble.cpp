#include<iostream>

int main()
{
    int i{};
    int j{};
    int temp{};

    int arr[8] = {34,56,8,9,67,2,30};
   /*  std::cout << "unsorted array" << '\n'; // prints the unsorted array as seen in line 13
    for(int i=0; i<8; i++)
    {
        std::cout <<arr[i] <<'\t';
    }
    std::cout << '\n'; */

    for(int i=0; i<8; i++)
    {
        for(int j=i+1; j<8; j++) // j is the second index that is : if i=34 then j=56
        {
            if(arr[j]<arr[i]) // Checks if j>i
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    std::cout << "sorted array" << '\n';
    for(int i=0; i<8; i++)
    {
        std::cout<<arr[i] <<'\t'<<'\n';
    }
    return 0;
}