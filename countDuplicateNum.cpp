#include<bits/stdc++.h>
using namespace std;

bool Dupli(int arr[],int n){
    sort(arr, arr+n, greater<int>());
    for(int i=0; i<n; i++){
        if(arr[i-1]==arr[i]){
            return true;
        }
    }
    return false;
}
int main(){
    int n = 5 ;
    int arr[5]= {1,2,3,5,5};
    cout<<Dupli(arr,5);
}
