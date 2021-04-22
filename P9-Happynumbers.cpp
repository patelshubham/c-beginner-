//


// Input: n = 19
// Output: True
// 19 is Happy Number,
// 1^2 + 9^2 = 82
// 8^2 + 2^2 = 68
// 6^2 + 8^2 = 100
// 1^2 + 0^2 + 0^2 = 1
// As we reached to 1, 19 is a Happy Number.

// Input: n = 20
// Output: False


#include <iostream>


int numsquaresum(int num)
{
    int squaresum =0;


//finding the sum 
   while (num)
   {
       squaresum += (num%10) * (num%10);
       num /=10;
   }
  
  return squaresum;
}

// bool function to find if linkedlist loop is there 

bool ishappynumber (int num)
{
    int slow , fast;

    slow = fast = num;

    do
    {
        slow = numsquaresum(slow);

        fast = numsquaresum(numsquaresum(fast));


    } while (slow != fast);
    
    return (slow == 1);
    
}


int main()

{
    int num=20;
    if(ishappynumber(num))
    std::cout<<"is a happy number \n";
    else 
    std::cout<<"is not a happy number \n";
}