#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main (){
    int n;
    int sum=0;

    cin>>n;
    int arr[n];

    for(int i =0;i<n;i++){
        cin>>arr[i];

    }
    
    for(int i =0;i<n;i++){
        sum=sum+arr[i];
    
    }
    cout<<sum<<endl;

    sort(arr,arr+n);

    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";

    }
    cout<<"\nlength: "<<sizeof(arr)/sizeof(arr[0]); 
    
    



    return 0;
}