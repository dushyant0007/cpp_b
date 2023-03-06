#include <iostream>
using namespace std;

int main(){

   { int n = 4;
    int x = n;
    int  i = 1;

    while(n>0){
    while(i<=x){
        cout<<i<<" ";
        i++;
    }
    i = 1;
    cout<<endl;
    n--;
    }}


{
    int noOfRows = 5;
    int noOfColumns = 4;

    int i = noOfRows;
    int j = noOfColumns;

    int x = 1;
    while(i>0){
        while(j>0){
            cout<<x<<"  ";
            j--;
            x++;
        }
        i --;
        j = noOfColumns;
        cout<<endl;
    }

}

{
    int noOfRows = 5;
    int noOfColumns = 4;

    int i = 1;
    int j = 1;

    while (i<=noOfRows)
    {
       j = i;
       while(j>0){
        cout<<" * ";
        j--;
       }

        i++;
        cout<<endl;
    }
    

}


{ 
    int noOfRows = 5;
    int noOfColumns = 4;

    int i = 1;
    int j = 1;

    while (i <= noOfRows )
    {
        j = i;
        while(j>0){
            cout<<" "<<i<<" ";
            j--;
        }
        cout<<endl;
        i++;
    }
    

    }



{
    int noOfRows = 5;
    int noOfColumns = 5;

    int i = 1;
    int j = 1;

    while (i<=noOfRows)
    {
        j = i;
        while (j>0)
        {
            cout<<" "<<j<<" ";
            j--;
        }
        i++;
        cout<<endl;
    }
    


}

{

    int noOfRows = 5;
    int noOfColumns = 4;

    int i = 1;


    while (i<=noOfRows)
    {
        int j = 1;
        while(j<=noOfColumns){
            char ch = 'A'+i-1;
            cout<<" "<<ch<<" ";
            j++;
        }
        i++;
        cout<<endl;
    }
    

}

{
    int noOfRows = 5;
    int noOfColumns = 5;

    int i = 1;


    while (i<=noOfRows)
    {   
        int j = 1;
        while(j<=noOfColumns){

            char ch = 'A'+i+j-2;
            cout<<" "<<ch<<" ";

            j++;
        }

        cout<<endl;
        i++;
    }
    

}


{

    int noOfRows = 5;
    int noOfColumns = 5;

    int i = 1;
    int j = 1;

    while (i <= noOfRows)
    {
        
        for(int y = 0 ;y<noOfRows-i;y++){
            cout<<"   ";
        }
        
        for (int x = 0; x < i; x++)
        {
           cout<<" * ";
        }
       
        cout<<endl;
        i++;
    }
    

}


{
    int noOfRows = 5;
    int noOfColumns = 5;

   int count = 1;
   int i  = 1;

    while (i<=noOfRows)
    {
        for (int a = 0; a < noOfRows-i; a++)
        {
            cout<<"   ";
        }
    for (int j = 1; j <= i; j++)
    {
        cout<<' '<<j<<" ";
        
    }
    for (int j1 = i-1; j1 >0; j1--)
    {
        cout<<" "<<j1<<" ";
    }
        
        
        i++;
        cout<<endl;
    }
    
   




}


}