#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int a[n];
int *ptr,*str;
ptr=&a[0];
for(int p=0;p<n;p++){
cin>>*ptr;
ptr++;
}
for(ptr=&a[0];ptr<=&a[n-1];ptr+=1){
for(str=&a[0];str<=&a[n-1];str+=1){
if(*ptr<*str){
swap(*ptr,*str);
}
}
}
for(ptr=&a[0];ptr<=&a[n-1];ptr+=1){
cout<<*ptr<<" ";
}
return 0;
}
