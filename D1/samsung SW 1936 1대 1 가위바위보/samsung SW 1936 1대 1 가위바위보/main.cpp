#include <iostream>
using namespace std;

int main() {
    int a,b;
    cin>>a>>b;
    if(a==1){
        if(b==2){cout<<"B"<<'\n';}
        if(b==3){cout<<"A"<<'\n';}
    }
    else if(a==2){
        if(b==1){cout<<"A"<<endl;}
        if(b==3){cout<<"B"<<endl;}
    }
    else{
        if(b==1){cout<<"B"<<endl;}
        if(b==2){cout<<"A"<<endl;}
    }
 
    return 0;
}
