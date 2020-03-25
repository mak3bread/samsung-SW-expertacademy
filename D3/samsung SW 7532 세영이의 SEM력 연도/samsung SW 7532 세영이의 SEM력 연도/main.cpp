#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio();
    cin.tie(0);cout.tie(0);
    int T;cin>>T;
    for(int t=1;t<=T;t++){
        int S,E,M;cin>>S>>E>>M;
        while(1){
            if(S%24==E%24){break;}
            S+=365;
        }
        while(1){
            if(S%29==M%29){break;}
            S+=8760;
        }
        cout<<"#"<<t<<' '<<S<<'\n';
    }
    return 0;
}
