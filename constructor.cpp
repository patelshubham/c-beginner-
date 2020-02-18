#include <iostream>

//what is constructor ??
//find answer in code

class entity //our classs
{
public:
    float x, y;

    entity() //constructor name must match the class name

    {
        x = 0.0f;
        y = 0.0f;   //body you can put anything here
    }

    void print()
    {
        std::cout<<x<< ","<<y<<std::endl;   //printing part
    }

};

int
main()
{
    entity e;
    std::cout << e.x << std::endl; //we can directly call the constructor 
    e.print();

}

//this is the main use of constructor 
//same name as calss, no return type , you can call it directly and direct access to assigned values 
//if you don't define constructor compiler will take default constructor (but will nor make any difference because it won't be having any body , values)