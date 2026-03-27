#include <iostream> 
using namespace std ; 
int main (){
   int n ; 
   cout<<"Enter a number - " ;
   cin>>n ; 
   int sum = 0 ; 
   int i = 1; 
   while ( i<n){
    if ( n%i==0){
      sum = sum + i ;
    }
    i++ ;
   }
   if ( sum==n){
    cout<<"It is a perfect num ( Mr. perfect)" ;

   }else {
    cout<<" it is a non perfect number" ;
   }
  }





