//Find a triplet that sum to a given value

// Input: array = {12, 3, 4, 1, 6, 9}, sum = 24;
// Output: 12, 3, 9
// Explanation: There is a triplet (12, 3 and 9) present
// in the array whose sum is 24. 


// two pointers  firstp and secondp
// bool function to find tripet 


#include <iostream>
#include <array>
#include <algorithm>


//bool function with array , size and sum
bool find3numbers (int array[], int arr_size , int sum)

{
    int firstitr, seconditr;   //two iterators 

    std::sort(array, array+arr_size);  //sorting 
    

    for( int itr=0; itr<arr_size-2; itr++)

    {
        firstitr = itr+1;   // first ptr 

        seconditr =arr_size-1; // second ptr starting from last element

        while (firstitr<seconditr)
        {
            if (array[itr]+ array[firstitr]+array[seconditr] == sum){   // check if sum is asked result 
            std::cout <<" the triplet for sum is "<<array[itr]<<" "<<array[firstitr]<<" "<<array[seconditr]<<std::endl;
            return true;
            }
            else if (array[itr]+ array[firstitr]+array[seconditr] < sum)      // if less increase first pointer else decrse second ptr 
             firstitr++;

             else 
              seconditr--;
             


        }
    }

    return false;
}




int main()

{
    int array[]={1,4,45,6,10,8};
    int sum =22;
    int arr_size= sizeof(array)/sizeof(array[0]);
   
   find3numbers (array , arr_size, sum);

}


//1,4,6,8,10,45