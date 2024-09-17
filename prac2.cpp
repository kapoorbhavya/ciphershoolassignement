#include<iostream>
#include<string>
using namespace std;
int main(){
    int c=0,i;
    string str;
    getline(cin,str);
    char s;
    cin>>s;
    for(i=0;i<str.length();i++){
        if(str[i]==s){
            c++;
        }
    }
    cout<<c;

}