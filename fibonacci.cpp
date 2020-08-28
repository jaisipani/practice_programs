#include <iostream>
using namespace std;

long fib(int n)
{
    if(n > 2)
        return fib(n-1) + fib(n-2);

    else
        return 1;
         
}


}
int main()
{
    cout << fib(2) << endl;
    cout << fib(4) << endl;
    cout << fib(10) << endl;
    cout << fib(20) << endl;
    cout << fib(50) << endl;
}