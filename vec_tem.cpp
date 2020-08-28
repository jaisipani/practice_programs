#include <iostream>
#include <string>
using namespace std;


template <class T> // This means that below is as template that will be created during compile time.

class Gen {
    T first, second;
    public:
    Gen(T a, T b)
    {
        first = a;
        second = b;
    }

    T smaller();
};

template <class T>
T Gen<T>::smaller()
{
    return (first>second ? second : first);
} 
// void print(T val)
// {
//     cout << "value: " << val << "  " << sizeof(val) << endl;

// }

// void print(int val)
// {
//     cout << "value: " << val << endl;

// }
int main()
{
    // print(1); //implicitly defining the types of parameters passed
    // print<int>(7); //explicitly defining the type of parameters passed
    // print(1.2);
    // print("hellobaksh");

    Gen<string>ob1("Hi", "Ai" );
   cout <<  ob1.smaller();
}