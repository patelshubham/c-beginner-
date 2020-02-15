#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;
//description
// let's say we have array A=[1,2,3,4,5] and B=[6,7,8,9,10] and we want to merge them and create our 3rd array
// C=[1,2,3,4,5,6,7,8,9,10].
// it can be like A=[2,3,9,10,45,50] and B=[4,8,12,44,48] so our C=[2,3,4,8,9,10,12,44,45,48,50]
// we need to make sure that our 3rd array is sorted (in sequence).

int main()
{

    vector<int> arrone = {4, 1, 8, 9, 11};
    //vector our 1st array
    vector<int> arrtwo = {5, 2, 7, 10, 12};
    //vector our 2nd array
    vector<int> arrthree(10);
    //our third , resultant array

    sort(arrone.begin(), arrone.end());
    //let's sort them so no tension.
    sort(arrtwo.begin(), arrtwo.end());

    //merging is so easy 1st start end , 2nd start end and store in 3rd
    merge(arrone.begin(), arrone.end(), arrtwo.begin(), arrtwo.end(), arrthree.begin());
    //printing part
    cout << "finally our third array is: ";

    //printing all arrays
    for (int i = 0; i < arrthree.size(); i++)
        cout << arrthree[i] << " ";
    return 0;
}