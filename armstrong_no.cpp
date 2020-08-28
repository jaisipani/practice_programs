#include <iostream>
using namespace std;

int main()
{
    int N = 153;


     long sum = 0;
        int rem;

        while(N!=0)
        {
             rem = N%10;
             sum += (rem*rem*rem);
             N = N/10;
        }

        if(sum==N)
            cout << "true ";

        else
           cout <<  "false "; 
}