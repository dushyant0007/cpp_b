#include <iostream>
using namespace std;

int bSearch(int arr[], int target, int len)
{
    int srt = 0;
    int end = len - 1;
    int mid = srt + (end - srt) / 2;

    while (srt <= end)
    {
        if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            srt = mid + 1;
        else
            end = mid - 1;
        mid = (srt + end) / 2;
    }
    cout << "element no found" << endl;
    return -1;
}

int pivotInRotatedArr(int arr[], int len)
{
    int srt = 0;
    int end = len - 1;
    int mid = (srt + end) / 2;

    while (srt < end)
    {
        if (arr[mid] > arr[0])
            srt = mid + 1;
        else
            end = mid;
        mid = (srt + end) / 2;
    }
    return srt;
}

int main()
{
    //     int arr[] = {12,23,25,34,55,58,67,88};
    //    cout<< arr[bSearch(arr,58,8)]<<endl;
    //    cout<< bSearch(arr,55,8)<<endl;

    int arrr[] = {58, 67, 88, 12, 23, 25, 34, 55};
    cout << arrr[pivotInRotatedArr(arrr, 8)] << endl;
}