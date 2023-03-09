#include<iostream>
using namespace std;

void selectionSort(int arr[],int len){
for (int i = 0; i <len-1; i++)
{
    int min=i;
    int j;
    for (j = i+1; j < len; j++)
    {
        if(arr[min]>arr[j])
            min = j;
    }
    swap(arr[i],arr[min]);
}


}

int y  = 1010;
void bubbleSort(int arr[],int len){
    for (int i = 0; i < len-1; i++)
    {   int f = 0;
        cout<<y<<endl;
        for (int j = 0; j < len-i-1; j++)
        {
            if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
            f = 1;
            }
        }
        if(f == 0) break;
    }
    
}


void insertionSort(int arr[],int len){
    int ar;
    for (int i = 1; i < len-1 ; i++)
    {   int temp = arr[i];
        int j;
        for (j = i-1; j >=0; j--)
        {
            cout<<temp<<" "<<arr[i]<<endl;
            if(arr[j]>temp){
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1] = temp;
        
    }
    
}

int main(){

    int arr[] = {55,23,1,21,66,35,23};
    insertionSort(arr,7);
    for(int x : arr){
        cout<<x<<" ";
    }

}