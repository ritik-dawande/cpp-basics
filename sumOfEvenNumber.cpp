#include <iostream>
using namespace std;

int main (){
    int n ; 
    cout << "Enter a number - ";
    cin >> n ; 

    int a = 1 ;
    int sum = 0 ;

    while(a <= n){
        if(a % 2 == 0){
            cout << a << endl; 
            sum = sum + a;
        }
        a++;
    }

    cout << "The sum is - " << sum;
}