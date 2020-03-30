#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int T;cin>>T;
    for(int t=1;t<=T;t++){
        int N,Q,L,R;cin>>N>>Q;
        int *box=new int[N+1];
        for(int i=0;i<N+1;i++){box[i]=0;}
        for(int i=1;i<=Q;i++){
            cin>>L>>R;
            for(int j=L;j<=R;j++){box[j]=i;}
        }
        cout<<"#"<<t;
        for(int i=1;i<N+1;i++){cout<<' '<<box[i];}
        cout<<'\n';
        delete[] box;
    }
    return 0;
}
