//a. Create a vector of integers, insert elements, and display them using an iterator.

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main (){
    vector<int>v;
    int ch,x,k,n;
    do{
        cout<<"\n---------VECTOR OPERATION MENU----------";
        cout<<"\n1.Insert Elements";
        cout<<"\n2.Display Elements";
        cout<<"\n3.Sort Elements";
        cout<<"\n4.Search Elements";
        cout<<"\n5.Exit";
        cout<<"\n6.Delete";
        cout<<"\nEnter your choice";
        cin>>ch;
        switch (ch) 
        {
            case 1: cout<<"Enter Number of elements :-";
                    cin>>n;
                    for(int i=0;i<n;i++){
                        cin>>v[i];
                    }
                    break;
                    
            case 2: if(v.empty()){
                    cout<<"No elements entered";
                    }else{
                        cout<<"Elements are :-";
                        for(vector<int>::iterator it=v.begin();it !=v.end();it++){
                            cout<<*it<<" ";
                        }
                    }
                        break;
            
            case 3: if(v.empty()){
                cout<<"No elements entered";
            }else{
                sort(v.begin(),v.end());
                cout<<"vector sorted successfully";
            }

            break;

            case 4: if(v.empty()){
                cout<<"Vector is empty , cannot search";
                cin>>k;
                vector<int>::iterator pos=find(v.begin(),v.end(),k);
                if(pos!=v.end()){
                    cout<<"Element found at position "<<(pos - v.begin())+1;
                }else{
                    cout<<"Element not found";
                }

                break;
            }
            case 5:cout<<"Exiting the program ";
                    break ;
            
            case 6: if(v.empty()){
                cout<<"No element entered";
            }else{
                cout<<"Enter the element you want to remove ";
                cin>>k;
                vector<int>::iterator it=find(v.begin(),v.end(),k);
                if(it!=v.end()){
                    v.erase(it);
                    cout<<"Element deleted";
                }else{
                    cout<<"Element not found ";
                }

                break;
            }
            default:cout<<"Invalid choice ! try again !";
        }
           
    }while(ch!=5);

    return 0;
}