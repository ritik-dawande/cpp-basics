// Make a working calculator
#include <iostream>
using namespace std;
int main(){
int a,b;
cout<<"Enter your value a = ";
cin>>a;
cout<<"Enter your  value b =";
cin>>b;
char op;
cout<<"Enter your operator = ";
cin>>op;
if (op== '+'){
    cout<<a+b;
}else  if(op=='-'){
    cout<<a-b;
}else if (op=='*'){
    cout<<a *b;
}else if (op=='/'){
    cout<<a/b;
}else
cout<< "enter valid value";



    return 0;
}
