#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int pow(int a, int p)
{ 
    if (p == 0)
        return 1; 
    return a * pow(a, p - 1);

    // 2^4 = 2x(2^3)
    // f(n) = n.f(n-1)
}
int pow2(int a, int p)
{
    if (p == 0)
        return 1;
    if(p%2==0)  
    return pow2(a,p/2) * pow2(a, p/2);
    else return a*pow2(a,(p-1)/2) * pow2(a, (p-1)/2);
}

int factorial(int n)
{
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}

void printCounting(int n)
{
    if (n == 0)
        return;
    printCounting(n - 1);
    cout << n << " ";
}

int fibonacci(int n)
{
    if (n == 1)
        return 0;
    else if (n == 2)
        return 1;
    return fibonacci(n - 2) + fibonacci(n - 1);
}

int getSum(int arr[],int len){
    if(len==0)
        return arr[0];
    else
        return arr[0]+getSum(arr+1,len-1);
}

bool isSorted(int arr[],int len){
    if(len==0||len==1)
        return true;
    else if(arr[0]>arr[1])
        return false;
    else 
       return isSorted(arr+1,len-1);
}


bool binarySearch(int arr[], int s, int e, int mid, int target)
{
    if (s > e)
        return false;
    if (arr[mid] == target)
        return true;
    else if (arr[mid] < target)
       return binarySearch(arr, mid + 1, e, ((mid + 1)+e)/2, target);
    else
       return binarySearch(arr, s, mid-1, (s +(mid-1))/2, target);
}
bool bsearch(int arr[],int len,int target){
    return binarySearch(arr,0,len,len/2,target);
}

void strReverse(string::iterator a,string::iterator b){
    if(a>b) return;
    swap(*a,*(b-1));
    strReverse(a+1,b-1);
}

bool checkPalindrome(string str,int s,int e ){
   if(s>=e) return true;
    else if(str[s]!=str[e]) return false;
    else return checkPalindrome(str,s+1,e-1);
}

void bubbleSort(int arr[] , int len){
    if(len==0||len==1)return;
    
    for (int i = 0; i < len-1; i++)
        if(arr[i]>arr[i+1])
            swap(arr[i],arr[i+1]);
    
    bubbleSort(arr,len-1);      
}


int main()
{

    cout << "pow(3,10) " << pow(3, 10) << endl;
    cout << "factorial(5) " << factorial(5) << endl;
    printCounting(12);
    cout << "fibonacci(8) : " << fibonacci(8) << endl;
    
    int arr[] = {1,4,7,12,24,35,37,41,56,60,75,88};
    cout<<"getSum(arr,11) : "<<getSum(arr,11)<<endl;
    cout<<"isSorted(arr,11) : "<<isSorted(arr,11)<<endl;
    cout<<"bsearch(arr,11,60) : "<<bsearch(arr,11,88)<<endl;

    string s = "HELLO";
    strReverse(s.begin(),s.end());
    cout<<"string s : "<<s<<endl;

    string p = "racecar";
    cout<<"is palindrome : "<< checkPalindrome(p,0,p.size()-1)<<endl;

    cout<<"pow(3,6) : "<<pow(3,6)<<endl;
    cout<<"pow2(3,6) : "<<pow2(3,6)<<endl;

    int a[] = {23,11,5,8,3,14,15,22};
    bubbleSort(a,8);
    for(int x : a)
        cout<<x<<" ";
    cout<<endl;
}