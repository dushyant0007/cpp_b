#include<iostream>
#include<vector>
using namespace std;

/*
You are given an array consisting of 'N' integers which denote the position of a stall.
You are also given an integer 'K' which denotes the number of aggressive cows.
You are given the task of assigning stalls to 'K' cows such that the minimum
distance between any two of them is the maximum possible.

Return the largest possible minimum distance between cows.
*/

bool isPossible(vector<int> &cowsBox, int k, int mid)
{
    int cow = 1;
    int lastPos = cowsBox[0];

    for (int i = 0; i < cowsBox.size(); i++)
    {
        if (cowsBox[i] - lastPos >= mid)
        {
            cow++;
            if (cow == k)
            {
                return true;
            }
            lastPos = cowsBox[i];
        }
    }
    return false;
}

int aggressiveCows(vector<int> &cowsBox, int k)
{
    sort(cowsBox.begin(), cowsBox.end());

    int srt = 0;
    int end = cowsBox[cowsBox.size() - 1] - cowsBox[0];
    int max = 0;

    while (srt <= end)
    {
        int mid = srt + (end - srt) / 2;

        if (isPossible(cowsBox, k, mid))
        {
            max = mid;
            srt = mid + 1;
        } 
        else
        {
            end = mid - 1;
        }
    }
    return max;
}

int main(){

int arr[] = {1,2,4,7,11};
vector<int> v ;

for (int i = 0; i < 5; i++)
{
   v.push_back(arr[i]);
}

cout<<aggressiveCows(v,3)<<endl;

}