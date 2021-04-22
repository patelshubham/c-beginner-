// Input : str = "abaab"
// Output: 3
// Explanation : 
// All palindrome substring are :
//  "aba" , "aa" , "baab" 

// Input : str = "abbaeae"
// Output: 4
// Explanation : 
// All palindrome substring are : 
// "bb" , "abba" ,"aea","eae"


#include <iostream>
#include<cstring>



int countpalsub(char str[], int num)
{
    // 2d matrix that counts all palindrome 
    // substring dp[i][j]
    int dp[num][num];
    memset (dp,0,sizeof(dp));

    //pcheck if substring is palindrome
    //else false 

    bool pcheck[num][num];
    memset(pcheck, false , sizeof(pcheck));

  //palindrom of single length
    for (int itr=0; itr<num; itr++)
    pcheck [itr][itr]= true;

    //palindrom of length 2
    for (int itr=0; itr<num-1;itr++ )
    {
        if (str[itr]== str[itr+1])
        {
            pcheck[itr][itr+1]= true;
            dp[itr][itr+1]=1;
        }
    }


for (int gap=2 ; gap<num; gap++)
{
    for (int itr=0;itr<num-gap; itr++)
    {
        int itr2=gap+itr;

        if (str[itr]==str[itr2]&& pcheck [itr+1][itr2-1])
        pcheck[itr][itr2]= true;

        if (pcheck[itr][itr2]==true)
        dp[itr][itr2]= dp[itr][itr2-1] + dp[itr+1][itr2]+1 - dp[itr+1][itr2-1];

        else
        dp[itr][itr2]=dp[itr][itr2-1]+dp[itr+1][itr2]-dp[itr+1][itr2-1];
    }
}

return dp[0][num-1];
}

int main()
{
    char str[]= "abaab";
    int num= strlen(str);
    std::cout<<countpalsub(str, num)<<std::endl;
}