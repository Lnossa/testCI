#include <iostream>

class A
{
private:
    int x;
    
public:
    A()
    {
        x = 12345;
    }
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