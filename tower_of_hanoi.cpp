#include <bits/stdc++.h>
using namespace std;

void TowerOfHanoi(int n, char frompeg, char aux, char topeg)
{
    if(n == 1)
    {
        printf("Move disk 1 from %c to %c\n" , frompeg, topeg);
        return;
    }

    TowerOfHanoi(n-1, frompeg, topeg, aux);

    printf("Move Disk %d from %c to %c\n", n, frompeg, topeg);   // single disk ke liye no recursion.

    TowerOfHanoi(n-1, aux, frompeg, topeg); 
}

int main()
{
    cout << "The steps to achieve the goal of game is: "<<endl;

char x = 'A';
char y = 'B';
char z = 'C';
    TowerOfHanoi(1 , x , y , z);
    cout << "**************************************" << endl;
    TowerOfHanoi(2, x, y, z);
    cout << "**************************************" << endl;

    TowerOfHanoi(3 , x , y , z);
    cout << "**************************************" << endl;

    TowerOfHanoi(4 , x , y , z);
    
}