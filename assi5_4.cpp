
#include<iostream> 
using namespace std; 
void sub(int i,int j) 
{ 
 try 
 { 
 if(i==0) 
 { 
 throw i; 
 } 
 else 
 cout<<"Subtraction result is: "<<i-j<<endl; 
 } 
 catch(int i) 
 { 
 cout<<“Exception caught inside sub()\n”; 
 throw; 
 } 
}; 
int main() 
{ 
 try 
 { 
 sub(8,4); 
 sub(0,8); 
 } 
 catch(int k) 
 { 
 cout<<“Exception caught inside main()\n”; 
 } 
 return 0; 
} 
