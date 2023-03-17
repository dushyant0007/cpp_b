#include <iostream>
using namespace std;

void merge(int arr[], int s, int e, int mid)
{

    int la = mid - s + 1;
    int lb = e - mid;
    int *aa = new int[la];
    int *ab = new int[lb];

    for (int i = s, j = 0; i <= mid; i++, j++)
        aa[j] = arr[i];

    for (int i = mid + 1, j = 0; i <= e; i++, j++)
        ab[j] = arr[i];

    // Merge two arrays
    int i = 0;
    int j = 0;
    int k = s;

    while (i < la && j < lb)
    {
        if (aa[i] < ab[j])
        {
            arr[k] = aa[i];
            k++;
            i++;
        }
        else
        {
            arr[k] = ab[j];
            k++;
            j++;
        }
    }

    while (i < la)
    {
        arr[k] = aa[i];
        i++;
        k++;
    }
    while (j < lb)
    {
        arr[k] = ab[j];
        j++;
        k++;
    }

    delete [] aa;
    delete [] ab;
}

void mergeSort(int arr[], int s, int e)
{
    if (s >= e)
        return;
    else
    {
        int mid = (s + e) / 2;
        mergeSort(arr, s, mid);
        mergeSort(arr, mid + 1, e);
        merge(arr, s, e, mid);
    }
}

int main()
{
    int a[] = {23,11,5,8,3,14,15,22};
    mergeSort(a,0,7);
    for(int x : a)
        cout<<x<<" ";
    cout<<endl;
}