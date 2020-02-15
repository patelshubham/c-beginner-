#include <iostream>
#include <vector>
#include <algorithm>

//iostream for input-output cin/cout
//vector is library which we gonna use it 
//alorithm is  for sort algorith we gonna use it directly for sorting
using namespace std;

//Description
// let's say array A=[1,4,2,3,5,7,6] as you can see it's not sorted numbers are not in order.
// let's say array B=[1,2,3,4,5,6,7] array is sorted , numbers are in order.
// so we need to check if entered array by user is like our array B or not.
// That is our problem statement.

int main()
{
    std::vector<int> ourarray ={1,2,9,8,7,6,5};
    //our array we have given here in vector
    std::sort(ourarray.begin(), ourarray.end());
    //we are using STL c++ library which sort elements for us.
    for (int value : ourarray)
    //easy for loop 
    std::cout<< value <<std::endl;
    //printing part 
    std:cin.get();
}