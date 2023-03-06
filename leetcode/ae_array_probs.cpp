#include<iostream>
#include<map>
#include<vector>

using namespace std;

// Q1 Swap Alternate
void swapAlternate(int arr[],int len){
    for (int i = 0; i < len; i+=2)
    {   
        if(i+1<len)
        swap(arr[i],arr[i+1]);
    }
    
}


/* Q2 
2M+1 size of array is given and M no.s are +ve towies and one is unique
Find unique element
*/
int uniqueIn2Mplus1 (int arr[] ,int len){
    int ans = 0;
    for (int i = 0; i < len; i++)
    {
        ans = ans^arr[i];
    }
    return ans;
    }

/*
Q3 Find Duplicates - [1 to N-1] elements are in the array
*/



void printArr(int arr[],int len){
     for(int i = 0;i<len;i++){
        cout<<" "<<arr[i];
    }
    cout<<endl;
}

int main(){
    int arr[6]={1,2,3,4,5,6};
    swapAlternate(arr,6);
    printArr(arr,6);
    cout<<*(arr+6)<<endl;
}