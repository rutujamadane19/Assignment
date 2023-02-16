#include<iostream>
using namespace std;

class Numbers
{
    public:
    int num[10];
    void getNum(){
        cout<<"Enter the numbers:"<<endl;
        for(int i=0;i<5;i++){
            cin>>num[i];
        }
    }
    void smallest_num(){
        int small=num[0];
        for(int i=0;i<5;i++){
            if(small>num[i])
            small=num[i];
        }
        cout<<"the smallest number is : "<<small<<endl;

    }
    void largest_num(){
        int large=num[0];
        for(int i=0;i<5;i++){
            if(large<num[i])
            large=num[i];
        }
        cout<<"the largest number is : "<<large<<endl;
    }
    void sortnum(){
        int temp;
        for(int i=0;i<5;i++){
            for(int j=i+1;j<5;j++){
                if(num[i]>num[j]){
                    temp=num[i];
                    num[i]=num[j];
                    num[j]=temp;
                }

            }
        }
        cout<<"the middle number is "<<num[2]<<endl;
        cout<<"the second largest number is "<<num[3]<<endl;
        cout<<"the second smallest number is "<<num[1]<<endl;
    }
};
int main(){
    Numbers n;
    n.getNum();
    n.largest_num();
    n.smallest_num();
    n.sortnum();
    
    return 0;
}