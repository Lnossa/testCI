#include <iostream>

class A
{
    int x;
};

int main ()
{
    A* a = new A();
    std::cout << "OK" << std::endl;
    return 1;
}