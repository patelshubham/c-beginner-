#include <iostream>


int flipbits (unsigned a)

{

    //if all 1s are there then print all 1 in a
    if (~a==0)
    return 8*sizeof(int);   
//intialize currlen , prev len and max len
    int currlen=0, prevlen=0 ,maxlen=0;
    
    while(a!=0)
    {

        //if a is one then increase the count 
      if((a & 1)==1)
      currlen++;
        //if a is 0 then check 
      else if ((a & 1)==0)
      {
         // if prev and current is 0
          prevlen =(a&2)==0 ? 0: currlen;
         //current 0
          currlen=0;
      }
       //count the max
      maxlen = std::max(currlen+prevlen,maxlen);

      // do right shift of a 
      a>>=1;

    }
   

    //return the final length
   return maxlen+1;

}


int main(){


    std::cout<<flipbits(13);
}
