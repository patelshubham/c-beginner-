// problem statement
// suppose you have given two arrays
// A={1,4,7,9,10}
// B={2,4,6,7}
//output would be 1+4+7+9+10
//if none of them are common just make the largest sum
//Input: ar1[] = {2, 3, 7, 10, 12, 15, 30, 34}
//         ar2[] = {1, 5, 7, 8, 10, 15, 16, 19}
// Output: 122

// 1,3,5
//2,2,5

// Explanation: 122 is sum of 1, 5, 7, 8, 10, 12, 15, 30, 34

//Approach
//number of things needed first
// arr1,arr2 , sum1,sum2 ,
//index in arr1 and in arr2 index1, index2
//current element m,n basically size of array
//for iterating will need i,j
//final output result
// will keep adding elements in sum
//as soon as common element is found we'll check which sum is greater and will add that element in that sum
//if sum is same

#include <iostream>

using namespace std;

//finding the max number
int maxoftwo(int x, int y) { return (x > y) ? x : y; }

//function to find maximum path
int maxpath(int arr1[], int arr2[], int ele1, int ele2)
{

    //intialisation of few variables
    int sum1 = 0, sum2 = 0;

    int index1=0, index2 = 0;

    int result = 0;
//let's iterate both arrays considering that current element is greater than index 
    while (index1 < ele1 && index2 < ele2)
    {

        if (arr1[index1] < arr2[index2])
            sum1 += arr1[index1++];

        else if (arr1[index1] > arr2[index2])
            sum2 += arr2[index2++];

        else
        {

            //intercept point :let's find out max
            result += maxoftwo(sum1, sum2);

            //we are at intercept point just clear sum values again

            sum1 = 0, sum2 = 0;

            //updating for more common elements 
            int temp = index1; //while arr1[index1]=arr2[index2] sum1 updated and same condition cannot be applied because index1 is updated so taking a temp


            while (index1 < ele1 && arr1[index1] == arr2[index2])
                sum1 += arr1[index1++];
            while (index2 < ele2 && arr1[temp] == arr2[index2])
                sum2 += arr2[index2++];

            result += maxoftwo(sum1, sum2);  //result 

            sum1 = 0, sum2 = 0;         //again sum 
        }
    }
    while (index1 < ele1)
        sum1 += arr1[index1++];        //if there are any remaining elements just add them all

    while (index2 > ele2)
        sum2 += arr2[index2++];

    result += maxoftwo(sum1, sum2);

    return result;
}

int main()
{

    int arr2[] = {1,3,5};
    int arr1[] = {2,2,5};
    int ele1 = sizeof(arr1) / sizeof(arr1[0]);  // number of elements in array
    int ele2 = sizeof(arr2) / sizeof(arr2[0]);

    std::cout << " result is " << maxpath(arr1, arr2, ele1, ele2);
}