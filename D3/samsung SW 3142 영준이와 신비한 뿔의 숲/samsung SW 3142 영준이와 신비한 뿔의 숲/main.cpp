#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio();
    cin.tie(0);cout.tie(0);
    int T;cin>>T;
    for(int t=1;t<=T;t++){
        int N,M;cin>>N>>M;
        cout<<"#"<<t<<' '<<N-2*(N-M)<<' '<<N-M<<'\n';
    }
    return 0;
}
