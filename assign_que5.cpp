#include<iostream>
using namespace std;
int main(){
    int vow=0,cons=0;
    char str[150];
    cout<<"enter the string :"<<endl;
    gets(str);
    for(int i=0;str[i]!=0;i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'){
            vow++;
        }
        else if(str[i]>='a'&&str[i]<='z'||str[i]>='A'&&str[i]<='Z'){
            cons++;
        }
    }
    cout<<"total vowel in statement are "<<vow<<endl;
    cout<<"total consonant in statement are "<<cons<<endl;

    
    return 0;
}