#include <iostream>



//function  to swap values //pretty simple
int swap(int arr[], int i , int j)
{
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}



//partitioning : divide and conqure 

int partititon(int arr[], int l , int r)    // three parameters 
{
    int pivot = arr[r];    //pivot as r :last value 
    int i = l-1;           //i one before for dividing 

   for(int j=1;j<r;j++)      //loop to divide and swap 
   {
 if(arr[j]<pivot )
 {
     i++;
     swap(arr, i , j);         // if iterator is less than pivot then swap the numbers 
 }
   }
   
 //swap i+1 to make proper change greater on right and lesser on left 

 swap(arr, i+1 , r);
 return i+1;

}




void quicksort(int arr[], int l , int r )

{

    if(l<r)
    {
        int parti= partititon(arr, l ,r);    //quick sort logic first divide and then recursive call for checking 
        quicksort (arr, l, parti-1);
        quicksort( arr,parti+1, r);
    }
}



int main()
{
    int arr[5]={5,4,3,2,100};
    quicksort(arr,0,4);

    for(int i=0;i<5;i++)
    {
    std::cout<<arr[i]<<std::endl;

    }
    std::cout<<std::endl;
}
