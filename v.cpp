#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>num={2,1,5};
    int k=806;
    int c=0;
        for(int i=num.size()-1;i>=0;i--)
        
        {
            num[i]=(num[i]+k%10+c)%10;
            
            c=(num[i]+k%10+c)/10;
            k=k/10;
        }
        if(c>0)
        num.insert(num.begin(),c);
        for(auto i:num)
        cout<<i<<" ";
}