#include <iostream>


///normal settingbits 
int setbit(int n)

{
    int count=0;

    while (n>0)
    {
        count++;
        n&=(n-1);

    }

    return count;
}

//flippedbit we are doing XOR 
int flippedbit(int a , int b)
{
    //xor
    return setbit(a^b);
}


int main()
{
    int a=10;
    int b=20;
    std::cout<<"flipped count"<<flippedbit(a,b)<<std::endl; //input and function call
}
