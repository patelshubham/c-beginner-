#include <iostream>
#define CHARBIT 8

int min(int x, int y)
{
    return y + ((x-y) & ((x-y) >>(sizeof(int)* CHARBIT -1)));
}

int max(int x, int y)
{
    return x - ((x-y) & ((x-y) >>(sizeof(int)* CHARBIT -1)));
}


int main()

{
    int x=15,y=6;

    std::cout<<"min of"<<x<<"and"<<y <<std::endl;
    std::cout<<min(x,y)<<std::endl;
    
    std::cout<<"max of"<<x<<"and"<<y <<std::endl;
    std::cout<<max(x,y)<<std::endl;
    


}