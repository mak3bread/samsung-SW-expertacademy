#include <iostream>
using namespace std;

int main(){
    string a;
    cin>>a;
    
    for(int i=0;i<a.size();i++){
        cout<<(int)a[i]-64<<' ';
    }
    cout<<'\n';
    
    return 0;
}
