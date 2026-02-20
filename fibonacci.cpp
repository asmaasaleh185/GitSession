#include <iostream>
#include <vector>

void fibonacci(int n)
{
    long long t1 = 0, t2 = 1, nextTerm = 0;

    std::cout << "Fibonacci Series: ";

    for (int i = 1; i <= n; ++i)
    {
        std::cout << t1 << (i == n ? "" : ", ");
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    std::cout << std::endl;
}

int main()
{
    int n = 10;
    fibonacci(n);
    return 0;
}