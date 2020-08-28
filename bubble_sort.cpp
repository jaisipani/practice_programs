#include <iostream>
using namespace std;


void swap(int& x, int& y)
{
    int z;
    z = x;
    x = y;
    y = z;
}

void print(int a[], int n)
{
    for(int i=0; i<n; i++)
        cout<< a[i] << " ";

    cout << endl;    
}

void bubble_sort(int a[] , int n)
{
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
            if(a[j] >= a[j+1])
                swap(a[j], a[j+1]);
        }
    }
}

void selection_sort(int a[] , int n)
{
    for(int i=0; i<n-1; i++)
    {
        int min = i;
        for(int j=i+1; j<n; j++)
        {
            if(a[j] < a[min])
                min = j;
                
        }
        // print(a ,n); // just to check array after each iteration.
        swap(a[i] , a[min]);
    }
}

void insertion_sort(int a[], int n)
{
    for(int i=1; i<n; i++)
    {
        int key = a[i];
        int j = i-1;

        while(j>=0 && key < a[j])
        {
            a[j+1] = a[j];
            j--;
        }

        a[j+1] = key;
        // print(a ,n); // just to check array after each iteration.
        
    }
}


void merge(int arr[], int p, int q, int r)
{
    int n1 = q-p+1;
    int n2 = r-q;

    int a[n1], b[n2];
    for(int i=0; i<n1; i++)
        a[i] = arr[i+p];

    for(int i=0; i<n1; i++)
        b[i] = arr[q+1+i];

    int i=0, j=0, k=0;
    while(i<n1 && j<n2)
    {
        if(a[i] < b[j])
        {
            arr[k] = a[i];
            i++;
            k++;
        }

        else
        {
            arr[k] = b[j];
            j++;
            k++;
        }

        while (i < n1)
        {
            arr[k] = a[i];
            i++;
            k++;
        }

        while (j < n2)
        {
            arr[k] = b[j];
            j++;
            k++;
        }
        
    }    
}


void merge_sort(int a[] , int start, int end)
{
    if(start > end)
        return;

    int mid = (start + end)/2;
    merge_sort(a, start, mid);
    merge_sort(a, mid+1, end);
    merge(a, start, mid, end);  
}


int partition(int array[], int low, int high) {
  int pivot = array[high];
  int i = (low - 1);
  // Put the elements smaller than pivot on the left 
  // and greater than pivot on the right of pivot
  for (int j = low; j < high; j++) {
    if (array[j] <= pivot) {
      i++;
      swap(array[i], array[j]);
    }
  }
//   print(array, 7);
  swap(array[i + 1], array[high]);
  return (i + 1);
}

void quick_sort(int a[], int low, int high)
{
   if (low < high) {
    // Select pivot position and put all the elements smaller 
    // than pivot on left and greater than pivot on right
    int pi = partition(a, low, high);

    // Sort the elements on the left of pivot
    quick_sort(a, low, pi - 1);

    // Sort the elements on the right of pivot
    quick_sort(a, pi + 1, high);
  }

}


int main()
{
int arr[] = {2, 5, 1, 6, 8, 7, 3, 4};
int n = sizeof(arr)/sizeof(arr[0]);
// bubble_sort(arr, n);
// selection_sort(arr, n);

int arr1[] = {12, 3, 5, 9, 1, 2, 6, 8};
int n1 = sizeof(arr1)/sizeof(arr1[0]);

// insertion_sort(arr1, n1);
// merge_sort(arr1, 0, n1-1);

quick_sort(arr1, 0, n1-1);

cout << "sorted arrays:  " <<  endl;
print(arr1, n1);
return 0;

}