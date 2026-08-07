#include <iostream>
#include <bits/stdc++.h>

using namespace std;
void PrintNumbers(int a ,int b){
    for (int i=a;i<=b;i++){
        if(i%2==0){
            cout<<i<<" ";
        }
        else{
            cout<<"-"<<" ";
            
        }
    }
    cout<<"\n";
}

int main (){
    PrintNumbers(1,13);
    PrintNumbers(13,33);


 


}