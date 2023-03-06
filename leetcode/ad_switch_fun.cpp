#include<iostream>
using namespace std;

int main(){
    int num = 2;

    char c = 'a';
    cout<<(int)c<<endl;

    switch (c /*Input only can be int or char*/)
    {
    case 1:
        cout<<"First"<<endl;
        break;
    case 2:
        cout<<"Second"<<endl;
        break;    
    case 3:
        cout<<"Third"<<endl;
        break;    
    case 97:
        cout<<"Forth"<<endl;
        break;    
    
    default:
        cout<<"Default"<<endl;
        break;
    }
    
}