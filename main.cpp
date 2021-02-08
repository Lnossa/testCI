#include <iostream>

class A
{
    int x;
};

int f()
{
    A* a = new A();
    return 0;
}

int main ()
{
    f();
    f();
    std::cout << "OK" << std::endl;
    f();
    return 1;
}