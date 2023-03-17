#include<iostream>
using namespace std;

// GCD = Greatest Common Divisor
// HCF = Highest Common Factor

/* 
--------- 24 = 2x2x2x3
----------16 = 2x2x3x3
Intersection = 2x2x3   
*/

/* 
two +ve int a,b  (a>b)

a = bq+r    (0<=r<b) (gcd(a,b) = gcd(b,r))
b = rq1+r1  (0<=r1<r)
r1 =bq2+r2
    :
    :
    :
q(i-1)= r(i-1)q(i)+r(i)   
r(i-1)=riq(i+1)+ 0 

last non zero remainder is gcd;

gcd(a,b) = gcd(b,a%b)

^ lcm(a,b)*gcd(a,b) = a*b;

 */

int main(){

   cout<< INT64_MAX<<endl;
   cout<<sizeof(long long int);

}