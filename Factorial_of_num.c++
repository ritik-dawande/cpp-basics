#include <bits/stdc++.h>
using namespace std; 
int main (){
    int n ; 
    cout<<"Enter a number -";
    cin>>n; 
    int product = 1 ; 
    while ( n>0){
        product = product * n ; 
        n-- ; 
    }
    cout<<" factorial is - "<<product ; 
}