#include<iostream>
using namespace std;
int main(){
    int x,y;
    x=40,y=60;
    cout<<"before swapping";
    cout<<"value of a= "<<x<<endl;
    cout<<"value of b= "<<y<<endl;
    x=x+y;
    y=x-y;
    x=x-y;
    cout<<"after swapping";
    cout<<"value of x="<<x<<endl;
    cout<<"value of y="<<y<<endl;

    return 0;
}