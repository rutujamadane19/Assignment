#include <iostream> 
using namespace std; 
int main() 
{ 
int *ptr; 
int marks[10]; 
std::cout << "Enter the elements of an array :" << std::endl; 
for(int i=0;i<10;i++) 
{ 
cin>>marks[i]; 
} 
ptr=marks; 
std::cout << "The value of *ptr is :" <<*ptr<< std::endl; 
std::cout << "The value of *marks is :" <<*marks<<std::endl; 
}
 