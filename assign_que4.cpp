#include<iostream>
using namespace std;

class superPrime
{
    int num;
    public:
    void getdata(){
        cout<<"enter a number: "<<endl;
        cin>>num;
    }
    void checkSuperprime(){
        int imprime=1;
        for(int j=2; j*j<num; j++){
            if(num/j==0){
                imprime=0;
            }
        }
        if(imprime==1)
        {
            int rem=0;
            while(num>0){
                rem=num%10;
                int isPrime=1;
                for(int i=2; i*i<=rem; i++){
                    if(rem%i==0){
                        isPrime=0;
                    }
                }
                if(isPrime){
                    num=num/10;
                }
                else{
                    break;
                }
            }
            cout<<"this is super prime number "<<endl;
        }
        else{
            cout<<"this is composite number"<<endl;
        }
    }
};
int main(){
    superPrime s;
    s.getdata();
    s.checkSuperprime();
    return 0;
}