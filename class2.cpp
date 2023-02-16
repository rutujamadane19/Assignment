#include<iostream>
using namespace std;

class person{
    private:
int age;
string name;

public:
person(){
    cout<<"default constructor called:"<<endl;
    name="rutu";
    age=12;
}
void display(){
    cout<<"name of obj"<<endl;
    cout<<"age of obj"<<endl;
}
};
int main(){
person obj;
obj.display();

    
    return 0;
}