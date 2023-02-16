//#include<iostream>
//using namespace std;

/*
class mangoes{
    public:
    int mango_quantity;
    mangoes(){
        cout<<" enter no. of mangoes"<<endl;
        cin>>mango_quantity;
    }
    
};
class apples{
    public:
    int apple_quantity;
    apples(){
        cout<<"enter no. of apples"<<endl;
        cin>>apple_quantity;
    }
};
class fruit : public mangoes,apples{
    public:
    int fruits_quantity;
    void fruits_quantity(){
        fruits_quantity=mango_quantity+apple_quantity;
    }
};
void display(){
    cout<<"no. of fruits are"<<endl;
}




int main(){
    fruit f();
    f.fruits_quantity();
    f.display();
    
    return 0;
}*/



#include<iostream>
using namespace std;
class fruits{
    public:
int quantity;
};
int main(){
    fruits apple;
    fruits mango;
    apple.quantity=30;
    mango.quantity=10;
    cout<<"apple quantity:"<<apple.quantity<<endl;
    cout<<"mango quantity:"<<mango.quantity<<endl;





    
    return 0;
}