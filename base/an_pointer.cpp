#include<iostream>
using namespace std;

// ! Bad practice
int& fun(int n){
    return n;
    //here we returning the reference of the variable
    //which is going to be destroyed after the function execution is over
}

int main(){
    // int arr[10] = {0};
    // *arr  = 10;
    // // arr = arr+1; //! error: array type 'int[10]' is not assignable
    // cout<<*arr<<endl;

    char cr[8] = "zebra"; // temp memory copy str the char[10]
    cout<<cr<<endl;

    char cc = 'c';
    char *p = &cc;
    cout<<p<<endl;

    char *a = "string"; //  temp memory return first address of ""
    cout<<a<<endl;

int x = 10;
int *pt = 0;

// REFERENCE VARIABLE - Another name for same memory variable

int i = 4;
int &j = i;

int temp = fun(99);

while(i < 60000){
cout<<" i " << i <<endl;
i++;
}

cout<<temp<<endl;


}