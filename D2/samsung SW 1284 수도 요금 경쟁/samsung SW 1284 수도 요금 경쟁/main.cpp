#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int T;
    cin>>T;
    
    for(int t=1;t<=T;t++){
        int P,Q,R,S,W;
        cin>>P>>Q>>R>>S>>W;
        int resultA=P*W;
        int resultB=0;
        if(W>R){resultB=Q+S*(W-R);}
        else{resultB=Q;}
        if(resultA>resultB){cout<<"#"<<t<<' '<<resultB<<'\n';}
        else{cout<<"#"<<t<<' '<<resultA<<'\n';}
    }
    
    return 0;
}
