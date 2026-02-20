//1.initializing  the vector 

// #include<iostream>
// #include<vector>
// using namespace std;
// int main (){
//     vector <int> rupesh;
//     rupesh.push_back(10);
//     rupesh.push_back(20);
//     rupesh.push_back(30);
//     cout<<"Vector elements are :- ";
//     for(int i=0;i<rupesh.size();i++){
//         cout<<rupesh[i]<<" ";
//     }
//     return 0;
// }

//3b. 

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