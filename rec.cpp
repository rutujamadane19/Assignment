#include<iostream>
using namespace std;

int fib(int x){
    if(x==0||x==1)
    return(x);
    else{
        return (fib(x-1)+fib(x-2));
    }
}
int main(){
    int x,i=0;
    cin>>x;
    cout<<"fibonaci series : ";
    while(i<x){
cout<<" "<<fib(i);
i++;
    }

    return 0;
}