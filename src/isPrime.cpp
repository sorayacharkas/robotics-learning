#include <iostream>

bool isPrime(int num)
{   std::boolalpha;
    if (num <=1)
    {
        return false;
    }
    if (num % 2 == 0)
        {
            return false;
        }
    else
    {
        return true;
    }   
}