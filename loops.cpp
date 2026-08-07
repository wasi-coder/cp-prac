#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main (){
    for (int i =0;i<=10;i++){
        cout<<i<<" ";

    }
    cout<<"\n";

    int num=12345;
    while (num>0){
        int r=num%10;
        cout<<r<<" ";
        num/=10;


    }
    cout<<"\n";
    

    
 return 0;
}