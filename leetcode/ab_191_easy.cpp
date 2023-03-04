#include<iostream>
using namespace std;

/* 
* Write a function that takes the binary representation 
* of an unsigned integer and returns the number of '1' bits it has
*/

int hammingWeight(uint32_t n) {
        int ans = 0;
        while(n>0){
            if(n%2!=0 || n&1 == 1){
             ans+=1;  
            }
        n = n>>1;           
        }
        return ans;
    }

int main(){

}