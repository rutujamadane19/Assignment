#include<iostream>
using namespace std;
class base{
    public:
    int a=5;
    protected:
    int b=10;
    private:
    int c=20;
};
class derived : public base{
    public:
    void func(){
        cout<<"the value of a : "<<a;
        cout<<"the value of a : "<<b;

    }
};
int main(){
    derived obj;
    obj.func();
    return 0;
}