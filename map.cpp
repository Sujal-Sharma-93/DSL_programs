//3c.. Use a map to store StudentID -> Name pairs and display all elements

#include<iostream>
#include<map>
using namespace std;
int main(){
    map<string,string> st;
    st["DW"]="Arnav";
    st["EE"]="Sujal";
    st["EQ"]="Rupesh";
    cout<<"Student details are :- "<<endl;
    for(map<string,string>::iterator it=st.begin();it!=st.end();it++){
        cout<<it->first<<" - "<<it->second<<endl;
    }
}