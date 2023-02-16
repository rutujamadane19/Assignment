#include<bits/stdc++.h>
using namespace std;

class student{
    public:
    string name;
    int id;

    void printname();
    void printid(){
        cout<<" student id is"<<id<<endl;
    }

};
int main(){
    student obj;
    obj.name="abc";
    obj.id=12;
    obj.printname();
    cout<<endl;
    obj.printid();

    return 0;
}