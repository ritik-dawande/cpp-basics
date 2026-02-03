#include <iostream>
using namespace std;
 int main (){
    int year;
cout<<"Enter your fav year=";
cin>>year;
if (year%400==0){

    cout<<"congo it's a Leap year";
}else if (year %4==0 && year%100 !=0)
cout<<" leap year";
else {
    cout<<" not a leap year";
}


}


 