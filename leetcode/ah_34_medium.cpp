#include <iostream>
using namespace std;
#include <vector>
#include <map>

// With same manner you can find the first and last occurrence of a element in sorted array
// Find First and Last Position of Element in Sorted Array       

vector<int> searchRange(vector<int>& nums, int target) {

    vector<int>ans= {-1,-1};


    int srt = 0;
    int end = nums.size() - 1;
    int mid = srt+(end-srt)/2;

    while (srt <= end)
    {
        if (nums[mid] == target){
           ans[0] = mid;
           end = mid-1;
        }
            
        else if (nums[mid] < target)
            srt = mid + 1;
        else
            end = mid - 1;
        mid = (srt + end) / 2; 
    }
    
        srt = 0;
        end = nums.size() - 1;
        mid = srt+(end-srt)/2;
      while (srt <= end)
    {
        if (nums[mid] == target){
           ans[1] = mid;
           srt = mid+1;
        }
            
        else if (nums[mid] < target)
            srt = mid + 1;
        else
            end = mid - 1;
        mid = (srt + end) / 2; 
    }

    return ans;


    }
    
    int  main(){

        int arr[] = {5,7,7,8,8,10};
        vector<int> v ;
        for (int i = 0; i < v.size(); i++)
        {
           v.push_back(arr[i]);
        }
        
        searchRange(v,8);

}