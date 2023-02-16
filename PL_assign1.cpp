#include<iostream>
using namespace std;
class Employee
{
    private:
    int EmpID;
    char Name[100];
    
    char Address[100];
    char Designation[20];
    int salary[5];
    
    public:
    void getdata(){
        cout<<"Enter Employee id:"<<endl;
        cin>>EmpID;
        cout<<"Enter Employee name:"<<endl;
        gets(Name);
        gets(name);
        cout<<"Enter Employee Address:"<<endl;
        gets(Address);
        cout<<"Enter Employee Designation:"<<endl;
        gets(Designation);
        for(int i=0;i<5;i++){
            cout<<"Enter Employee salary:"<<endl;
            cin>>salary[i];
        }


    }
    float net_salary(){
        float net_sal;
        int netsal = salary[0];
        for(int i=0;i<5;i++)
        {netsal=netsal+salary[i];}
        net_sal=netsal/5;
        return net_sal;

    }

    void display(){
        cout<<"Employee id is: "<<EmpID<<endl;
        cout<<"Employee name is: "<<name<<endl;
        cout<<"Employee address is: "<<Address<<endl;
        cout<<"Employee designation is: "<<Designation<<endl;

        for(int i=0;i<5;i++){
            cout<<"Employee salary is: "<<salary[i]<<endl;
        }
         cout<<"Employee net salary is: "<<net_salary()<<endl;


    }

};
int main(){
    Employee A;
    A.getdata();
    A.display();
    
    return 0;
}