// #include <iostream>
// using namespace std; 
// int main(){
//     int n = 90;
//    int  sum = 0 ;
    

//     for ( int i = 1 ; i<n ; i++ ){
//             sum += i ;
        
//     }
//     float avg = sum /(float) n ; 
//      cout<<" the avg is - "<<avg;
// }


#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "How many numbers you want to enter? ";
    cin >> n;

    int sum = 0;
    int num;

    for (int i = 1; i <= n; i++) {
        cout << "Enter number " << i << ": ";
        cin >> num;
        sum += num;
    }

    float avg = sum / (float)n;
    cout << "Average is: " << avg;

    return 0;
}
