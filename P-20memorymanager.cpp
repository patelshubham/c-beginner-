


// class complex 
// {
//     public :
//     complex (double a, double b) : r (a), c(b)
//     private:
//     double real;
//     double complex;

// };


// int main()

// {
//     complex* array [1000];

//     for(int i=0;i<5000;i++)
//     {
//         for (int j =0; j<1000;j++)
//         {
//             array[j]= new complex(i,j);
//         }
//     }
// }





// struct INPUT 
// {
//     float4 position : sv_position
//     float2 uv: texcord;
//     float3 normal: normal;
//     uint id : sv_vertextid
// };

// texture2S tex: register (t0);
// samplerstaet sam: register (s0);







// using namespace std;

// class rectangle 
// {
//     private:
//     int legnth;
//     int breadth;
// };

// void fun()
// {
//     rectangle* p = new rectangle();

// }

// int main ()
// {
//     while (1)
//     {
//         fun();
//     }
// }


#include <iostream>
#include <memory>

class foo
{
    int x;
    public:
    explicit foo (int x) : x{x} {}
    int getx()  

    {
        return x;
    }

    ~foo()
    {
        std::cout <<"foo dest" <<std::endl;
    }
};

int main ()

{
    // foo *f = new foo(10);
    // std::cout <<f->getx()<<std::endl;

    std::unique_ptr<foo> p (new foo (10));
    std::cout<<p->getx()<<std::endl;


}
