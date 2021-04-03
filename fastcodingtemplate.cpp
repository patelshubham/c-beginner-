#include <iostream>
#include <typeinfo>
#include <algorithm>
#include <vector>
#include <tuple>
#include <string>

#define size 10


void som(std::vector <int> *vec)
{
    for(auto v:vec)
    {
        std::cout<<v <<std::endl;
    }
}



// std ::tuple <int , char, std::string> fun(bool flg)
// {
//     if(flg)
//     return std::make_tuple (1, 'x',"Shubh");
//     else 
//     return std::make_tuple (2, 'y',"Darsh");
// }


// template <typename T1, typename T2>
//  int  add (int  a , int  b) 
// {
//     return a+b;

// }
//  int  sub (int  a , int  b) 
// {
//     return a-b;

// }


// class base final 
// {
//     int b_var;

//     public:

//     base(){}
//     base (int var) : b_var(var) {}

//     // base* operator &() = delete;
   
  
    
// };

// class derived:public base 
// {
//   int f_var;
//   public:
//   derived(){}
//   derived (int a , int b) : base (a), f_var(b){}

// };


// void fun (base b)
// {
//     b.print();
// }
// void print (int val)
// {std::cout<<val<<std::endl;}


// int myatoi(char *str)
// {
    // int res=0;
    // int sign=1;
   

    // if(str[0]=='-')
    // {
    //     sign =-1;
    //     i++;
    // }

//     for(;str[i] !='\0'; ++i)
//     res = res*10 +str[i] - '0';

// return sign*res;
// }



int main()

{
//   auto x = 20;
//   auto y= 20.5;
//   auto b= new base();

//       std::cout<<typeid(x).name ()<<std::endl;
//       std::cout<<typeid(y).name ()<<std::endl;
//       std::cout<<typeid(b).name ()<<std::endl;


// std::string str ("shubh");// unneccesary intializing - this is called code bloating 
// std::cout<<str<<std::endl;


// const int a1= 10;       // as this is already const 
// const int *b1 = &a1;          // we cannot change this to something else 
// int *d1 = const_cast <int*>(b1);
// *d1=15;                                // this is not valid

// int a2=20;                       // this is allowed because this a2 is not const 
// const int*b2 =&a2;
// int *d2= const_cast <int*>(b2);   // so we can const cast for not const variables 
// *d1=30;              


// std::cout <<add(1,1.8)<<std::endl;

// std::cout <<add(1.9,8)<<std::endl;


// int i=10;
// int &r =i;    //refrence 
// int *p =&i;   //pointer 

// std::cout <<&i <<'\t'<<&r<< '\t' <<&p << std::endl;


// std::vector<int>vec;

// for(int i=0;i<5;i++)
// {
//     vec.push_back(i);
// }
// for(int i:vec)

// std::cout <<i<< std::endl;

// std::for_each(vec.begin(), vec.end(),[](int i)
// {
//     std::cout <<i<< std::endl;
// });

// std::for_each(vec.begin(), vec.end(),print);


// mathfun arr[2] = {add, sub};

// int c= (*arr [0]) (1,2);
// int d= (*arr [1]) (2,1);


// base b;

// base *bp =&b;
// std::cout <<bp<< std::endl;
// std::cout <<&b<< std::endl;




// char str1[]="-1234";
// int val= myatoi(str1);
// std::cout<< val<<std::endl;


//  int number =7;
//     int count=0;


// while (number)
// {
//     count =count+(number & 1);
//     number >>=1;
// }




// for (count =0; number; ++count)
// {
//     number &= number-1;

// }
// std::cout<<count<<std::endl;

// int num; char code ; std::string name ;


// auto v = fun(true);
// tie (num, code , name ) = fun(true);
// std::cout<< num << " "<<code <<" "<<name <<std::endl;
// tie (num, code , name ) = fun(false);
// std::cout<< num << " "<<code <<" "<<name <<std::endl;



//  std::vector<int>vec;

//  std::cout <<"size "<<vec.size()<<std::endl;
//  std::cout <<"capacity "<<vec.capacity()<<std::endl;

//  vec.push_back(1);
//  std::cout <<"size "<<vec.size()<<std::endl;
//  std::cout <<"capacity "<<vec.capacity()<<std::endl;


// 
std::vector<int>vec(size);
for (int count =0; count<size; count++)
{
    vec[count]=count;

}

som(&vec);
//

}
