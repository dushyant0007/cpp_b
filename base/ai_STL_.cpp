#include <iostream>
#include <array>
#include <vector>
#include <list>
#include <queue>
#include <set>
#include <algorithm>

using namespace std;

int main()
{

    int arr[5] = {23, 11, 45, 9, 6};

    //% Fixed size
    array<int, 5> a = {23, 11, 45, 9, 6};

    for (int i = 0; i < a.size(); i++)
        cout << a.at(i) << " ";
    cout << endl;

    cout<<"Element at index 2 "<<a.at(2)<<endl;;
    cout<<"Bool empty of not "<<a.empty()<<endl;
    cout<<"First Element "<<a.front()<<endl;
    cout<<"Last Element "<<a.back()<<endl;

//* --------------------------------------------------

    vector<int> vtr;
    cout<<"Capacity -> "<<vtr.capacity()<<endl;

    vtr.push_back(1);
    cout<<"Capacity -> "<<vtr.capacity()<<endl;

    vtr.push_back(24);
    cout<<"Capacity -> "<<vtr.capacity()<<endl;
    cout<<"Size -> "<<vtr.size()<<endl;

    vtr.push_back(80);
    cout<<"Capacity -> "<<vtr.capacity()<<endl;
    cout<<"Size -> "<<vtr.size()<<endl;

    vtr.push_back(66);
    cout<<"Capacity -> "<<vtr.capacity()<<endl;
    cout<<"Size -> "<<vtr.size()<<endl;

    vtr.push_back(50);
    cout<<"Capacity -> "<<vtr.capacity()<<endl;
    cout<<"Size -> "<<vtr.size()<<endl;

    cout<<"Element At Two ->"<<vtr.at(2)<<endl;

    cout<<"-----------------------"<<endl;

    // coping vector
    vector <int> vOne(vtr);

    // Size 5 and all initialized by 1
    vector<int> v(5,1);

    vector<int> vvOne = {12,13,22,19,11,43,85};

    for (int i = 0; i < vvOne.size(); i++)
        cout << vvOne.at(i) << " ";
     cout<<endl;   

    // Size after erase decrease capacity remain same
    vvOne.erase(vvOne.begin()+1,vvOne.begin()+3);
     
    for (int i = 0; i < vvOne.size(); i++)
        cout << vvOne.at(i) << " ";
    cout<<endl;    

 
    cout<<"-----------------------"<<endl;
    
    list<int>lst;
    lst.push_back(12);
    lst.push_front(12);
    
    //copying
    lst.assign(vvOne.begin()+2,vvOne.end());
    for(int x : lst)
        cout<<x<<" ";
        cout<<endl;
    
    lst.pop_back();

        for(int x : lst)
        cout<<x<<" ";
        cout<<endl;

        for(int x : vvOne)
        cout<<x<<" ";
        cout<<endl;
    


    cout<<"------Priority Queue-----------------"<<endl;
 
    // In other world max heap
    // Always give max value
    priority_queue<int> maxi;

    // min heap
    priority_queue<int,vector<int>,greater<int> > mini;

    
    cout<<"---------SET-------"<<endl;

    // Only contain unique elements
    set<int> s;
    
    cout<<"---------Algo-------"<<endl;

    cout<<binary_search(vvOne.begin(),vvOne.end(),43)<<endl;
    cout<<lower_bound(vvOne.begin(),vvOne.end(),43)-v.begin()<<endl;

    __rotate_forward(vvOne.begin(),vvOne.begin()+2,vvOne.end());
    for(int x : vvOne)
    cout<<x<<" ";
    cout<<endl;

    vvOne.insert(vvOne.begin()+3,99);

    for(int x : vvOne)
    cout<<x<<" ";
    cout<<endl;

    
}