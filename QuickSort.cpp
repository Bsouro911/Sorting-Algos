#include <iostream>
using namespace std;

int partition(int arr[], int s, int e)
{
    int pivot = arr[s];
    int count = 0;
    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] <= pivot)
        {
            count++;
        }
    }

    // placing pivot at right position
    int pIndex = s + count;
    swap(arr[pIndex], arr[s]);

    // taking care of left and right part
    int i = s, j = e;
    while (i < pIndex && j > pIndex)
    {
        while (arr[i] <= pivot)
        {
            i++;
        }
        while (arr[j] > pivot)
        {
            j--;
        }
        if (i < pIndex && j > pIndex)
        {
            swap(arr[i++], arr[j--]);
        }
    }

    return pIndex;
}

void qS(int arr[], int s, int e)
{
    // base case
    if (s >= e)
    {
        return;
    }
    // partition
    int p = partition(arr, s, e);

    // sort the left part
    qS(arr, s, p - 1);

    // sort the right part
    qS(arr, p + 1, e);
}

int main()
{
    int arr[5] = {2, 4, 1, 6, 9};
    int n = sizeof(arr) / sizeof(int);
    qS(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}