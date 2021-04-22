//merge sort

//  let's say we are given an array 7,3,5,2,4,1,8,6
//                                  7,3,5,2      4,1,8,6
//                                  7,3  5,2      4,1   8,6 
//                                  7, 3 , 5, 2,  4 , 1, 8, 6
 //                                 3,7 , 2,5  , 1, 4 , 6, 8
//                                  2,3,5,7    1,4,6,8
//                                  1,2,3,4,5,6,7,8

 // The time complexity of merging two sorted sub-arrays each of length n is 2n. Since merging happens at each level during the way out, the time complexity is O(n)*(number of levels) i.e log(n). Thus the complexity of merge sort is O(n log(n))


 // requirement of mergesort 

 // vector
 // function to divide and conquer --> mergesort
 //-- mid varibale , mid formula   we are going to traverse from low to high so [low,mid, high ]
 //function to merge and sort 




 #include <iostream>
#include <vector>

 std::vector<int>auxvec;
// this guy will merge sorted subarray into bigger array
 void merge (std::vector<int>&vect,int low , int mid , int high)
 {
    int left_index = low;
    int right_index= mid+1;
    int aux_index = low;
 


// this logic is to pick the smaller number between left and right 
    while(left_index<=mid && right_index<= high)
    {
      if (vect[left_index] <= vect[right_index])
      {
       auxvec[aux_index++]=vect[left_index++];
      }
    
      else 
      {
          auxvec[aux_index++] = vect[right_index++];
      }
      
    }
 
      
    if(left_index <= mid )
    {
       for (int i=left_index; i<=mid ; i++)
       auxvec[aux_index++]=vect[i];
    }
 

    else 
    {
        for(int i=right_index; i<=high ; i++)
        {
         auxvec[aux_index++]=vect[i];
        }
    }
   
    for(int i=low; i<=high;i++)
    {
    vect[i]= auxvec[i];
    }
}
 void mergesort (std::vector<int>& vect, int low,  int high)
 { 
    int mid ;

    if(low<high)

    {
        mid = (low+high)/2;
        mergesort(vect, low , mid);
        mergesort(vect,mid+1, high);
        merge(vect, low, mid , high);
    }
 }

 int main()
 {
   std::vector<int>vect ={7,3,5,2,4,1,8,6};

   auxvec.resize(vect.size());
   mergesort(vect,0, vect.size()-1);

   std::cout<<"sorted num"<<std::endl;

   for(auto& it: vect)
   std::cout<<it<<" ";
 }