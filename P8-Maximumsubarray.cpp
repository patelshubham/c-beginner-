

//Largest Sum Contiguous Subarray

// LET'S SAY WE HAVE -2,-3 4, -1,-2,1,5,-3 --> 4,-1,-2,1,5

//requirements 

// we need max_sofar , currentmax 


#include <iostream>
#include <climits>
#include<algorithm>

int maxsubarraysum(int array[], int size )

{ 

    //intialize both with 0
    // int max_sofar= array[0];
    // int curr_max=array[0];

    int max_sofar= INT_MIN;
    int max_ending_here =0;
    int start=0,end=0,var1=0;

    for(int itr=1;itr<size;itr++)
    {
        // //
        // curr_max = std::max(array[itr], curr_max+array[itr]);
        // max_sofar= std::max(max_sofar, curr_max);

      //starting itr -> adding in maxendinghere var 
        max_ending_here += array[itr];

        if( max_sofar<max_ending_here)
        {
            max_sofar = max_ending_here;
            start = var1;
            end =itr;
        }

        if ( max_ending_here <0)
        {
            max_ending_here =0;
            var1=itr+1;
        }
    }

    std::cout<<"maximum sum is"
              << max_sofar <<std::endl;
    
    std::cout<<"starts from "<< start<<std::endl<< "ends at" <<end<<std::endl;
    
}

int main()

{
    int array[]= { -2,-3,4,-1,-2,1,5,-3};
    int num = sizeof(array)/sizeof(array[0]);

    int max_sum = maxsubarraysum(array, num);

    std::cout<<"maximum sum is "<< max_sum;

}