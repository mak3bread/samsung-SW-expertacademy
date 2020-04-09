#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int T;cin>>T;
    for(int t=1;t<=T;t++){
        int D,H,M,result=0;cin>>D>>H>>M;
        if(D==11){
            if(H<11){result=-1;}
            else if(H==11){
                if(M<11){result=-1;}
                else{result=M-11;}
            }
            else{
                result=(H-11)*60+(M-11);
            }
        }
        else{
            result=(D-11)*24*60+(H-11)*60+(M-11);
        }
        cout<<"#"<<t<<' '<<result<<'\n';
    }
    return 0;
}
