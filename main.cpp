/* #include <iostream>
//Below is factorial code
int factorial(int n)
{
    if(n==0)
    return 1;
    else
    return n * factorial(n-1);
}

int main()
{
    int n{4};
    std::cout << "n factorial = " << factorial(n) << '\n';
    return 0;
}
 */
//Below is fibonacci code

#include <iostream>

int fib(int target, int n, int y);

int main()
{
    std::cout <<fib(20, 0, 1);
}

int fib(int target, int n, int y)
{
    std::cout << n << " ";
    if(target == 0)
    {
        return n + y;
    }

    else {
        return fib(target-1, y, n + y);
    }
}
