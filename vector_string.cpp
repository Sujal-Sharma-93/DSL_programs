//. Create a list of strings, perform insertion and deletion, and traverse using an iterator

#include<iostream>
#include<vector>
#include<list>
#include<algorithm>
using namespace std;
int main (){
    list<string>l;
    l.push_back("c++");
    l.push_back("Java");
    l.push_back("Python");

    cout<<"Initial list:\n";
    for(list<string>::iterator it=l.begin();it!=l.end();it++){
        cout<<*it<<" ";
    }
    l.push_front("DS");
    l.pop_back();
    cout<<"\nfter insertion and deletion : \n";
    for(list<string>::iterator it=l.begin();it!=l.end();it++){
        cout<<*it<<" ";
    }
    return 0;
}