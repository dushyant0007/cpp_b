#include<iostream>
using namespace std;

/*
* Given an integer number n, return the difference between the
* product of its digits and the sum of its digits.
*/

int subtractProductAndSum(int n) {
        int a = n;
        int product = 1;
        int sum = 0;
        while(a>0){
           int digit = a%10;
           product*=digit;
           sum +=digit;
           a = a/10;
        }
        return product - sum;
    }


int main(){

cout<<subtractProductAndSum(5)<<endl;

}