#include <iostream>

//what is destructor ?
//you will find answer in code

class entity
{ //our class
public:
    float x, y; //public var

    entity() //created our constrcutor
    {
        x = 0.0f; // gave values
        y = 0.0f;
        std::cout << "my entity created" << std::endl;
    }

    entity(float a, float b)
    {
        x = a; //did some changes to the body for sake of doing
        y = b;
    }

    ~entity() // this is how you destroy constructor using ~
    {
        std::cout << "my entity destroyed" << std::endl; //printing
    }
    void print()
    {
        std::cout << x << " " << y << std::endl; //printing part
    }
};

void function() // function
{
    entity e;
    e.print();
}

int main()
{

    function(); //function call
    std::cin.get();
}