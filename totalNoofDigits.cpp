#include <bits/stdc++.h> 
using namespace std ; 
int main (){
    int n ; 
    cout<<" enter a number - "; 
    cin>> n ; 
    int count = 0 ; 
    while (n>0){
        int lastd = n%10 ;
         n = n/10 ; 
        count ++ ; 


    }
    cout<<" number of digits is - "<< count ; 
}