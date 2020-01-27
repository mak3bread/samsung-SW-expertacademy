#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T,N,M;
    cin>>T;
    for(int i=1;i<=T;i++){
        cin>>N>>M;
        vector<int> Aj(N,0);
        vector<int> Bj(M,0);
        int max=0;
        
        for(int j=0;j<N;j++){
            cin>>Aj[j];
        }
        
        for(int j=0;j<M;j++){
            cin>>Bj[j];
        }
        
        if(N>M){
            for(int j=0;j<=N-M;j++){
                int temp=0;
                for(int k=0;k<M;k++){
                temp+=Aj[j+k]*Bj[k];
                }
                if(temp>max){max=temp;}
            }
        }
        else if(N==M){
            for(int j=0;j<N;j++){max+=Aj[j]*Bj[j];}
        }
        else{
            for(int j=0;j<=M-N;j++){
                int temp=0;
                for(int k=0;k<N;k++){
                temp+=Aj[k]*Bj[j+k];
                }
                if(temp>max){max=temp;}
            }
        }
        
        cout<<"#"<<i<<' '<<max<<'\n';
        Aj.clear();
        Bj.clear();
    }
    
    return 0;
}
