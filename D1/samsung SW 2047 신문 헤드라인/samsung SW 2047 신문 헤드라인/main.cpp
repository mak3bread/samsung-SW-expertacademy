#include <iostream>
using namespace std;

int main(){
    
    string a;
    cin>>a;
    
    for(int i=0;i<a.size();i++){
        if((int)a[i]>=97&&(int)a[i]<=122){
            cout<<(char)(a[i]-32);
        }
        else{
            cout<<a[i];
        }
    }
    cout<<'\n';
    return 0;
}
