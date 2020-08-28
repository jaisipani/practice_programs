#include <bits/stdc++.h>
using namespace std;

void NbitString(string s , int n)
{
    if(n < 1)
        cout << s << endl;

    else
    {
        s[n-1]= 0;
        NbitString(s , n-1);
        s[n-1]= 1;
        NbitString(s , n-1);
    }
        
}
int main()
{
    string s = "abc";
    int n = s.length();

    cout << n << " bit combination of streings are: " <<endl;
    NbitString(s , n);

    
}