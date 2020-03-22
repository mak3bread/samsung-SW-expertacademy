#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int T;cin>>T;
    for(int t=1;t<=T;t++){
        string s;cin>>s;
        int size=s.size()-1,last=s[size]-48;
        if(last%2==0){cout<<"#"<<t<<' '<<"Even"<<'\n';}
        else{cout<<"#"<<t<<' '<<"Odd"<<'\n';}
    }
    return 0;
}
