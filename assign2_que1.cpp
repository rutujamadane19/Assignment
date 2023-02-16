#include<iostream>
using namespace std;
class film{
    string name;
    string language;
    string type;
    float duration;

    public:
    film(){
        language="hindi";
        duration=2.5;
    
    cout<<"hrs"<<endl;
    }
    void setdata(void){
        cout<<"enter the name of movie"<<endl;
        cin>>name;
        cout<<"enter the type of movie"<<endl;
        cin>>type;
        cout<<"enter the language"<<endl;
        cin>>language;
        cout<<"enter the duration"<<endl;
        cin>>duration;

    }
    
   ~film(){
    cout<<"the details are deleted"<<endl;
   }

};
int main(){
    film movie;
movie.setdata();
movie.displaydetails();


    
    return 0;
}