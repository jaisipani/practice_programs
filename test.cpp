#include <iostream>
using namespace std;


int main()
{
  int N = 10, X = 12;
   long table[N][N];
    int count = 0;

    for(int i=0; i<N; i++)
    {
        for(int j=0; j<N; j++)
        {
            table[i][j] = (i+1)*(j+1);
        }
    }

    for(int i=0; i<N; i++)
    {
        for(int j=0; j<N; j++)
        {
            if(table[i][j] == X)
                count++;
        }
    }

    cout << count;
}