#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int T;cin>>T;
    for(int t=1;t<=T;t++){
        int a,b,c;cin>>a>>b>>c;
        if(a==c){cout<<"#"<<t<<' '<<b<<'\n';continue;}
        else if(a==b){cout<<"#"<<t<<' '<<c<<'\n';continue;}
        else{cout<<"#"<<t<<' '<<a<<'\n';continue;}
    }
    return 0;
}
