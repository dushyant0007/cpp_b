#include<iostream>
#include <vector>
using namespace std;

int getLength(char name[]){
    int count = 0 ;
    for (int i = 0; name[i] !='\0'; i++)
    {
        count++;
    }
    return count;
}

int main(){
    char name[8];
    // cout<<"Enter string"<<endl;
    // cin>>name;
    // cout<<name;
    // cout<<"\nLength : "<<getLength(name)<<endl;

    vector<char> c;
    
    c.push_back('a');
    c.push_back('b');
    c.push_back('c');
    c.push_back('d');

    vector<char> c2;
    c2 = c;
  
    if(c2==c) cout<<"c2 == c"<<endl;

    c2.push_back('x');

    for(char k : c)
    cout<<k<<" ";
    cout<<endl;

    for(char k : c2)
    cout<<k<<" ";
    cout<<endl;

    string s;
    transform(c.begin(),c.end(),c.begin(),::tolower);
    cin.getline(name,89);
 
}     