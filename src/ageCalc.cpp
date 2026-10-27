#include <iostream>
#include "ageCalc.h"

bool ageCalc()
{
    std::cout<<"Enter your age: "<<std::endl;
    int age{};
    std::cin>>age;
    if (age>=18)
    {
        return true;
    }
    else
    {
        return false;
    }
}