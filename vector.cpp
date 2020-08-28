#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

/* vector functions:
push_back(): push an element(arg) to the end of vector.
pop_back(): removes an eememt from the end of a vector.
size(): size of the vector.
begin(): returns an iteration to respective element mentioned.
end()
erase()
front(): returns starting element of vector.
back(): returns ending elements of vector.
empty(): returns 0 or 1 bassed on whether the vecotr is empty or not.
clear(): removes all the elements from vector.
*/
using namespace std;

int main()
{

  int arr[] = {2, 5, 12, 76};
  int n = sizeof(arr)/sizeof(arr[0]);
//   cout <<arr << endl;
//   cout <<*arr << endl;
//   cout <<arr + n-1 << endl;
//   cout <<*(arr + n-1) << endl;

  
   
   vector <int> v ;
   for(int i=0; i<100; i*=2)
        v.push_back(i);

    int count = v.size();
    // for(auto it = v.begin(); it!=v.end(); it++)
    //     cout << *it << " ";

    for(int i=0; i<count; i++)
        cout << v[i] << " ";
   

// for(int x : S)
//     cout << x << " ";

// cout << endl;    
// set<int> :: iterator it = S.find(-1);

// if(it == S.end())
// {
//     cout << "Number not present in set" << endl;
// }  
// else
// {
//     cout << "it is present and value is: " << *it << endl;

// }

//first number which is greater than some number in set
 
}