#include <iostream>
#include <iomanip>

//using namspace std;
// to find a sqaure //logic of the algorithm

double Square(double finalNum, double iroot, double jroot)
{

    double mid = (iroot + jroot) / 2; // finding a mid point
    double mul = mid * mid;           //multiplication

    //if mid is sqrt then return mid
    if (mul == finalNum || (abs(mul - finalNum) < 0.00001))
        return mid;

    // if mul is less than n , second half == iroot ,mid jroot
    else if (mul < finalNum)
        return Square(finalNum, mid, jroot);
    //else first half
    else
        return Square(finalNum, iroot, mid);
}

//function to find sqaure root
void squareRoot(double finalNum)
{
    double iroot = 1;

    bool found = false;
    //when value is not found check if i*i=n
    while(!found)
    {

//check if it's by defauly squareroot
        if (iroot * iroot == finalNum)
        {

            std::cout <<std:: fixed << std::setprecision(0) << iroot;

            found = true;
        }
//if iroot is greater than finalnum
        else if (iroot * iroot > finalNum)
        {

            double result = Square(finalNum, iroot - 1, iroot); // check sqaure logic 
            std::cout << std ::fixed << std::setprecision(5) << result;
            found = true;
        }
        iroot++;
    }
}

int main()
{

    double finalNum = 0.25;

    squareRoot(finalNum); //call squareroot

    return 0;
}