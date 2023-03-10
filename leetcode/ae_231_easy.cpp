#include <iostream>
using namespace std;

// Given an integer n, return true if it is a power of two. Otherwise, return false.
// An integer n is a power of two, if there exists an integer x such that n == 2x.

bool isPowerOfTwo(int n)
{
    if (n == 0)
        return false;

    int i = 0;
    while (n != 0)
    {
        if ((n & 1) == 1)
        {
            if (i == 1)
            {
                return false;
            }
            i++;
        }
        n = n >> 1;
    }
    return true;
}

int main()
{
}