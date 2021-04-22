// Given an array of integers and a number k, find maximum sum of a subarray of size k.

// Examples :

// Input  : arr[] = {100, 200, 300, 400}
//          k = 2
// Output : 700

// Input  : arr[] = {1, 4, 2, 10, 23, 3, 1, 0, 20}
//          k = 4 
// Output : 39
// We get maximum sum by adding subarray {4, 2, 10, 23}
// of size 4.



#include <iostream>


maxsumsub (int array[], int size , int k)

{

    int result=0;

   for (int itr = 0; itr<k; itr++)
   result += array[itr];


   int currentsum = result;
   for( int itr=k; itr<size; itr++)
   {
   currentsum += array[itr] - array[itr-k];       // 
   }
}