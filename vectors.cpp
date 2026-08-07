#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main (){
    vector<int>v;
    vector<int>v1;
    vector<vector<int>>v2;

    v.push_back(2);
    v.push_back(20);
    v.push_back(200);
    v.pop_back();

    v.insert(v.begin(),12);
    v.insert(v.begin(),3,12);
    
    v1=v;
    v2.push_back(v);
    

    
    for(auto &it:v){
        cout<<it<<" ";

    }
    cout<<"\n";

    return 0;
}