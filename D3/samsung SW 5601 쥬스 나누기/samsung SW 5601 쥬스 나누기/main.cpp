#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin>>T;
    for(int t=1;t<=T;t++){
        int N;
        cin>>N;
        cout<<"#"<<t<<' ';
        for(int i=1;i<=N;i++){
        cout<<1<<"/"<<N<<' ';
        }
        cout<<'\n';
    }
    return 0;
}

