#include <iostream>
#include <queue>
#include <vector>

template <typename T>
void print_queue(T &q)                              //template 
{
    while (!q.empty())                             //while queue is not empty 
    {
        std::cout << q.top() << " ";              // print top
        q.pop();                                  //pop-remove
    }
    std::cout << "\n";                            // for space
}

int main()
{

   { std::priority_queue<int> q;                           // standard priority queue
    for (int elm : {1, 8, 5, 6, 3, 4, 0, 9, 7, 2})         // for elements
    {
        q.push(elm);                                        //pushing of elements 
    }
    print_queue(q);                                        //print is defined above
}

{
    std::priority_queue< int, std::vector<int>, std::greater<int>> q2;   // vector inside queue and we are finding greater
    for (int elm : {1, 8, 5, 6, 3, 4, 0, 9, 7, 2})                      // for elements
    {
        q2.push(elm);                                                  //pushing of elements 
    }
    print_queue(q2);
}

{
    auto cmp = [](int left, int right) { return (left) < (right); };        //comparison array - return left <right 
    std::priority_queue<int, std::vector<int>, decltype(cmp)> q3(cmp);
    for (int elm : {1, 8, 5, 6, 3, 4, 0, 9, 7, 2})
    { 
        q3.push(elm);                                                               //9,8,7,6
    }
    print_queue(q3);
}

}