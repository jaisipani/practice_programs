#include <bits/stdc++.h> //including this includes all header files.
using namespace std;

int power(int x, int y) // use c++ <cmath> librarry to use pow function
{
   if(y == 0) return 1;

   int temp = power(x,y/2);

   if(!(y%2))
   {
       return temp*temp;

   }
   else
   {
       return x*temp*temp;
   }
   
    
}


int main()
{
    int x = 4, y = 4;
    cout << x <<"^"<< y << " is: " <<endl;

    cout << power(x , y) << endl; // using our own function . works in O(logN). T(N) =T(N/2) + c.

    cout << pow(4,7); //using inbuilt function.

    
}