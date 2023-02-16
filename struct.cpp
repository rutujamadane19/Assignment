#include<iostream>
using namespace std;

struct student{
    int age,roll_no;

};

int main(){
    struct student s1;
    s1.age=8;
    s1.roll_no=9;
    cout<<"age "<<s1.age<<"roll_no "<<s1.roll_no<<endl;
    return 0;
}