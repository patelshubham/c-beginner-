// {1,3}{2,3}--> merge 
//{1,3}{2,4} --> merge
//requirements
//start and end variable 
//bool compareinterval 
//

#include<iostream>
#include <algorithm>
#include<stack>


struct interval
{
    int start, end;
};

bool compareinterval(interval i1, interval i2)
{
    return (i1.start<i2.start);
}

void mergeintervals (interval array[], int num)
{  

    // // base condition it shouldn't be zero
    //   if (num <=0);
    //   return;
      
    //   //creating empty stack
    //   std::stack<interval>stacky;

      std::sort(array, array+ num , compareinterval);
      

      int index =0;

    //   stacky.push(array[0]);

      for(int itr=1; itr<num; itr++)
      {
    //       interval top = stacky.top();

    //       if(top.end <array[i].start)



    // array[0].end {1,3} 3 in this case >= array 1 start {2,3} 2 
      if (array[index].end >= array[itr].start )
      {
          array [index].end = std::max(array[index].end , array[itr].end );   //here setting is happening we are taking max and asssigning to the max 
          array [index].start = std::min(array[index].start, array[itr].start);   // both for start and end 

    
      }

      // {1,3}{4,5} - will increment index
      else
      {

        index++;
        // will go next and that will become our itr 
        array[index ]= array [itr];
      }
      
}
    std::cout<<"\n the merged intervals are ";

    for(int itr=0; itr<=index; itr++)
    std::cout << "[" <<array[itr].start <<" , "<< array[itr].end <<" ] ";

}


int main()

{
    interval array[]= {{6,8}, {1,9}, {2,4}, {4, 7}};

    int num = sizeof (array )/ sizeof (array[0]);

    mergeintervals(array , num);
}