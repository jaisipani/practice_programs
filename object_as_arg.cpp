#include <iostream>
using namespace std;

class X {
    int val;

 public:
    X()
    {
        val = 0;
    }

    X(int p)
    {
        val = p;
    }

     void func(X *p , X *q)
     {
         val = p->val + q->val;
     }

    void print()
    {
        cout << "value: " << val <<endl;
    }

};

int main()
{
    X ob1(5);
    X ob2(3);
    X ob;
    ob.func(&ob1, &ob2);

    ob.print();
}