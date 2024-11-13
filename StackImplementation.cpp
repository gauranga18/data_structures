#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main(){
        stack<string> Stackname;
    int size;

    cout<<"Enter the size of the stack : "<<endl;
    cin>>size;

    for(int i=0;i<size;i++){
        string name;
        cout<<"Enter name"<<i+1<<": "<<endl;
        cin>>name;
        Stackname.push(name);
    }

    cout<<"Stack elements : "<<endl;
    while(!Stackname.empty()){

        cout<<Stackname.top()<<endl;
        Stackname.pop();
    }

    return 0;
}