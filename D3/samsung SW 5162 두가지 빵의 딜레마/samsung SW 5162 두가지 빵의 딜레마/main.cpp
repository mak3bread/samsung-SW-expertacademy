#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int T;cin>>T;
    for(int t=1;t<=T;t++){
        int A,B,C;cin>>A>>B>>C;
        cout<<"#"<<t<<' '<<((A>B)?C/B:C/A)<<'\n';
    }
    return 0;
}
