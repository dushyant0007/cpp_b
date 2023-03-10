#include<iostream>
#include<math.h>
using namespace std;

 int bitwiseComplement(int n) {
        if(n==0)return 1;
        int a = n;
        int ans = 0;
        int bitN = 0;

        int i = 0;
        while(a!=0){
            a = a>>1;  
            i++;
        }
        bitN = ~n;
        for(int j = 0 ;j<i;j++){
            ans = ans + (bitN&1)*pow(2,j);
            bitN = bitN>>1;
        }
 }


   int bitwiseComplement_1(int n) {

        if(n==0) return 1;

        int mask = 0;
        int x = n;
        while(x!=0){
            mask = (mask<<1)|1;
            x = x>>1;
        }

    return (~n)&mask;
    }
   
int main(){

    cout<<bitwiseComplement(0)<<endl;

}