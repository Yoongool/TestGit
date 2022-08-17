#include <iostream>

int add(int a, int b)
{
    return a+b;
}

float add2(float a, float b)
{
    return a+b;
}

int main()
{
    std::cout << "Hello world!" << std::endl;
    std::cout << "a+b = " << add(1,2) << std::endl;
    return 0;
}