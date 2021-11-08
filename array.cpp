#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, i;
    cin>>n;
    int a[n];
    
    for(i=0; i<n; i++){
        cin>>a[i];
    }  

    for(int j=0; j<n-1; j++){
        for(i=0; i<n-1; i++){
            if(a[i]>a[i+1]){
                swap(a[i], a[i+1]);
            } 
        }  
    }

    for(i=0; i<n; i++){
        cout<<a[i]<<" ";
    }

    return 0;
}