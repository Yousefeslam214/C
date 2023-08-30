#include <iostream>

#include <vector>
using namespace std;

// can't work it because i don't know vector

/**
 * mergesort(vector<int> &arr,)
 * 
 * main - Call the recursive function.
 * 
 * Return: zero.
 * 
 * Competitve programing: https://www.youtube.com/watch?v=hyk46UmJPS4
*/


// can't work it because i don't know vector

void merge(vector<int>& arr, int low, int mid, int high)
{
    int n1 = mid - low + 1;
    int n2 = high - mid;

    vector<int> left(n1);
    vector<int> right(n2);

    for (int i = 0; i < n1; i++)
        left[i] = arr[low + i];
    for (int j = 0; j < n2; j++)
        right[j] = arr[mid + 1 + j];

    int i = 0;
    int j = 0;
    int k = low;

    while (i < n1 && j < n2)
    {
        if (left[i] <= right[j])
        {
            arr[k] = left[i];
            i++;
        }
        else
        {
            arr[k] = right[j];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        arr[k] = left[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        arr[k] = right[j];
        j++;
        k++;
    }
}

void mergesort(vector<int> &arr, int low, int high)
{
    if(low < high)
    {
        int mid = (low + high)/2;
        mergesort(arr, low ,mid);
        mergesort(arr, mid+1,high);
        merge(arr, low, mid, high);

        //linearly ,merge to sorted blocks
    }
}



int main()
{
    vector<int> arr = { 5, 2, 8, 3, 1, 6, 9, 7, 4 };
    int n = arr.size();

    cout << "Original Array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    mergesort(arr, 0, n - 1);
    cout <<"arr";

    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}