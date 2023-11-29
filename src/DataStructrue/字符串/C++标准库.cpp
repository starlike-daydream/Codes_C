#include<iostream>
using namespace std;

int main(){
    string s = "Hello World";
    cout<<s.data()<<endl;
    cout<<s.c_str()<<endl;
    cout<<s.size()<<endl;
    cout<<s.find(' ')<<endl;
    cout<<s.substr(5,6 )<<endl;
    s.erase(5,6);
    cout<<s.c_str()<<endl;
    s.append(" World");
    cout<<s.data()<<endl;
    s.replace(5,6,"");
    cout<<s.c_str()<<endl;
    s.insert(5," World");
    cout<<s.data()<<endl;
    return 0;
}