#include <iostream>
using namespace std;

template<class T>
int Linear_search(T x, T a[], int size)
{
    for(int i = 0; i<size; i++)
    {
        if(a[i] == x)
        {
            cout << "Element found, and it is at position: " << i+1 <<endl;
            return (i+1);
        }
    }

    printf("Element do not exist in the array");
    return -1;
}

template<class T>
int binary_search(T x, T a[], int low, int high)
{
    if(low > high)
        return -1;

    else
    {  
    int mid = (low + high)/2;
    if(low < high)
    if(x == a[mid])
        return mid;

    else if(x < a[mid])
        return binary_search(x, a, low, mid-1);

    else 
        return binary_search(x, a, mid+1, high);
    
    }    
              
}


int main()
{
    
    int a[] = {1, 4, 6, 13, 54, 12, 56, 87};
    float b[] = {23, 45, 76, 11.1, 1.1, 2.3};
    int n1 = sizeof(a)/sizeof(a[0]);
    int n2 = sizeof(b)/sizeof(b[0]);

    // Linear_search<int>(12, a, n1);
    // Linear_search<float>(1.1, b, n2);

    int x = binary_search<int>(12, a, 0, n1-1);
    cout << "Element found at position: " << x << endl;
    int y = binary_search<float>(1.1, b, 0, n2-1);
    cout << "Element found at position: " << y << endl;






}