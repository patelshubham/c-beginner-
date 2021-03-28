/////////////////////////////////////////////////////////////////////////

// Given a real number between 0 and 1 (e.g., 0.72) that is passed in as a double, print the binary representation. If the number cannot be represented accurately in binary with at most 32 characters, print” ERROR:’
// Examples:

// Input :  (0.625)10
// Output : (0.101)2

// Input : (0.72)10
// Output : ERROR






#include <iostream>
#include <string>

using namespace std;



string toBinary(double n)
{

    //check if value is between 0 and 1
    if(n>=1 || n<0)
    return "Error";

//append answer 
    string answer;
    answer.append(".");

    


while (n>0)
{
    //check if string is not greater than 32 bits
   if (answer.length()>=32)
   return "Error";
   double b=n*2;    //keep on multiplying by 2
    if(b>=1)
    {
        answer.append("1");   // if you see 1 in answer append 1
         n=b-1;                // do -1 to go back to lesser values 
    }

    else
    { 

        answer.append("0");     // if it is 0 append 0
        n=b;                    // here no need to do minus 1 as value is already leser than 0
        
    }
  

  
}
return answer;                    //answer 
}

int main(){

    double n=0.625;                      //input
    string result=toBinary(n);           //function call
    cout<<"(0"<<result<<")in base 2"<<endl;  //printing resulyt
}
