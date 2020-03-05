#include <iostream>

int main()
{

    char A[] = "python";  //take one string
    char B[7], t;         //array gor reversed string and t for swapping    
    int i, j;             // we gonna take one array and start form beginning and end [a,b,c,d,e] from a and e

    for (j = 0; A[j]!='\0'; j++) //starting from reverse
    {
    }
    j = j - 1;                   //becuse we are reversing, we'll descrese 

    for (i = 0; i < j; i++, j--)
    {
        t = A[i];                     // no whenever array elements met in loop , we'll swap
        A[i] = A[j];
        A[j] = t;
    }

    std::cout<<A<<std::endl;                  //printing part
}