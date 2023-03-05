#include<iostream>
#include<math.h>
using namespace std;

/*
* Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes 
* the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.
* Assume the environment does not allow you to store 64-bit integers (signed or unsigned).
*/

int reverse(int x) {

        int ans = 0;
        while(x!=0){
            int digit = x%10;
            if(ans>((pow(2,31)-1)/10)||ans<(-pow(2,31)/10)) return 0;
            ans = ans*10+digit;
            x = x/10;
        }

        return ans;
    }


int main(){


}