#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int T;
    cin>>T;
    
    for(int i=1;i<=T;i++){
        int N;
        cin>>N;
        int cnt=1;
        int max=100000;
        
        cout<<"#"<<i<<'\n';
        
        while(1){
            if(cnt%2==1){max/=2;}
            else{max/=5;}
            
            int result=N/max;
            N=N%max;
            
            cout<<result<<' ';
            
            if(max==10){
                break;
            }
            cnt++;
        }
        cout<<'\n';
    }
    
    return 0;
}
