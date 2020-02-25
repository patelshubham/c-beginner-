#include <iostream>
#include <string>

template <typename T> // this is how you use template , just say template then  inside <> give typename , i have given T here

void show(T value)   // show function to print int,string and float ... 

{
    std ::cout << value << std::endl;   //printing stuff
}

int main()
{

    show(5);
    show("hello");         // as you can see this is the main use of template.. I can call any datatype and it will print 
    show(5.5f);

    std::cin.get();
}