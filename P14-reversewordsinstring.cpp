// Input: s = “geeks quiz practice code” 
// Output: s = “code practice quiz geeks”

// Input: s = “getting good at coding needs a lot of practice” 
// Output: s = “practice of lot a needs coding at good getting” 


//requirements 
//find middle of number 
//function reveresestring 

#include <iostream>
#include<string>
using namespace std;

string reveresestring (string stringy[], int length) 
{
 //check if number is even
    if (length%2 == 0)
    {
//finding a middle 
    int middle =length/2;

    while(middle<=length-1)
    {
         string temp;
         temp= stringy[length-middle-1];
         stringy [length-middle -1 ]= stringy [middle];
         stringy [middle] = temp;
         middle += 1;
       
    }
    }
    else //when number is odd

    {

         int middle =(length/2)+1;

        while(middle<=length-1)
    {
         string temp;
         temp= stringy[length-middle-1];
         stringy [length-middle -1 ]= stringy [middle];
         stringy [middle] = temp;
         middle +=1;
       
    }

    }
    string stringy2 = stringy[0];
    for (int itr =1; itr<9; itr++)
    {
        stringy2 = stringy2+ " "+ stringy[itr];
    }
    
    return stringy2;

}


int main()
{
  string stringy = "getting good at coding "
               "needs a lot of practice";
                
    string words[] = { "getting", "good", "at",
                       "coding", "needs", "a",
                       "lot", "of", "practice"};
      
    cout << reveresestring(words, 9) << endl;

}