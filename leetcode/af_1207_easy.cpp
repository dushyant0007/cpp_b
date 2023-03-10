#include <iostream>
#include <map>
#include <vector>
using namespace std;
/*
*  Given an array of integers arr, return true if the number of occurrences of each 
*  value in the array is unique or false otherwise.
*/

bool uniqueOccurrences(vector<int> &arr)
{
    map<int, int> ans;

    for (int i = 0; i < arr.size(); i++)
    {
        // if(ans.count(arr[i]) == false)
        //     ans[arr[i]] = 1;
        // else
        ans[arr[i]] = ans[arr[i]] + 1;
    }

    vector<int> opt;
    for (const auto &[key, value] : ans)
    {
        opt.push_back(value);
    }

    for (auto i = 0; i < opt.size() - 1; i++)
    {
        for (auto j = i + 1; j < opt.size(); j++)
        {
            if (opt.at(i) == opt.at(j))
                return false;
        }
    }

    return true;
}

int main()
{

    vector<int> v1;
    int arr[] = {-3, 0, 1, -3, 1, 1, 1, -3, 10, 0};
    for (int a : arr)
    {
        v1.push_back(a);
    }

    bool x = uniqueOccurrences(v1);
    cout << x << endl;

}