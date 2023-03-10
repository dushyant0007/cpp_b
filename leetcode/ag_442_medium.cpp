#include<iostream>
#include<map>
#include<vector>
using namespace std;

/*
? Given an integer array nums of length n where all the integers of nums are in the range [1, n] 
? and each integer appears once or twice, return an array of all the integers that appears twice.

? You must write an algorithm that runs in O(n) time and uses only constant extra space.
*/


vector<int> findDuplicates(vector<int>& nums) {
        
      map<int,int> temp;

      for(int i = 0 ; i < nums.size() ; i++){
          temp[nums[i]]+=1;
      }

    vector <int> ans;

    for(auto &[key,value] : temp){
        if(value == 2)
        ans.push_back(key);
    }
    return ans;
    }





vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        for(int i = 0 ;i<nums1.size();i++){
            for(int j = 0;j<nums2.size();j++){
                if(nums1[i] == nums2[j]){
                 ans.push_back(nums1[i]);
                 nums1[i] = -1;
                 nums2[j] = -2;
                 break;
                }       
        }
        }


return ans;
}




int main(){

  vector<int> a ;
  a.push_back(1);
  a.push_back(2);
  a.push_back(2);
  a.push_back(1);

  vector<int> b ;
  b.push_back(2);
  b.push_back(2);

 for(int a :intersection(a,b)){
    cout<<a<<" "<<endl;
 }

}