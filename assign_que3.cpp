#include<iostream>
using namespace std;

class value 
{
    int a,b,c;
    public:
    void getval(){
        cout<<"Enter values of a,b,c: "<<endl;
        cin>>a>>b>>c;
    }
    void x_value(){
        float X;
        int d=a+b;
        X=a*b-c/d;
        cout<<"the value of X  is: "<<X<<endl;
    }
};
int main(){
    value v;
    v.getval();
    v.x_value();
    return 0;
}