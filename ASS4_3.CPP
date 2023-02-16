#include<iostream>
#include<bits/stdc++.h>
using namespace std;
namespace Oragnisation
{
    class Employee {
        public:
        int EmpID;
        string Name;
        float Salary;
         void setDetails (int EmpID, string  Name,float Salary)
         {
           this->EmpID=EmpID;
           this->Name=Name;
           this->Salary=Salary;
         }
         void getDetails (){
            cout<<"Employee ID : "<<EmpID<<endl;
            cout<<"Employee name : "<<Name<<endl;
            cout<<"employee salary : "<<Salary<<endl;         
        }
    };
} 
using namespace Oragnisation;

int main(){
     Employee E;
     E.setDetails(1,"suhana",1235.6);
     E.getDetails();
     E.setDetails(2,"aryan",123456.89);
     E.getDetails();
}
