
#include <iostream>


int add(int a, int b) 
{
    return a + b;
}


double add(double a, double b) 
{
    return a + b;
}


std::string add(std::string a, std::string b) 
{
    return a + b;
}

int main() 
{
    std::cout << "Sum of integers: " << add(5, 3) << std::endl;
    std::cout << "Sum of doubles: " << add(2.5, 3.7) << std::endl;
    std::cout << "Concatenated string: " << add("Hello, ", "world!") << std::endl;

    return 0;
}
