// LRU cache basically least recently used frame 


//required stuff:

// need a list to store keys of cache 
// unordered map for storing key value pair of references 


#include <iostream>
#include <list>
#include <unordered_map>

class LRUcache {

//this is for storing keys of the cache
    std::list<int> dq;

 // store refrences of key in cache
  std::unordered_map <int, std::list<int>::iterator> ma;
   int csize;  //maximum capacity of the cache 
public:
    LRUcache (int);
    void refer(int);
    void display (); 

};
//sizing 
LRUcache::LRUcache(int n)
{
    csize = n;
}

void LRUcache:: refer (int x)
{   
    //cache is null
    if (ma.find(x)== ma.end())
     
    {    // cache is full
        if (dq.size()==csize)
        {
            //delete least recently used element 
            int last = dq.back();
           //pops the last element
            dq.pop_back();

            //erase the last
            ma.erase(last);

        }
    }

    else 
    dq.erase(ma[x]);

    dq.push_front(x);
    ma[x]=dq.begin();
}


void LRUcache::display()
{  

    //iterate in the deque print all elements 
    for (auto it =dq.begin(); it !=dq.end(); it++)

    std::cout <<(*it)<<" ";

    std::cout<<std::endl;
}

int main()
{
    LRUcache ca(4);

    ca.refer(1);
     ca.refer(2);
     
    ca.refer(3);
     ca.refer(1);
     
    ca.refer(4);
     ca.refer(5);

     ca.display();
}