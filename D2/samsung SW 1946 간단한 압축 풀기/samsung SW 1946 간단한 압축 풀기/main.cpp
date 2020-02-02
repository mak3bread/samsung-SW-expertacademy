#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int T;
    cin>>T;
    
    for(int test=1;test<=T;test++){
        int N;
        cin>>N;
        for(int i=0;i<N;i++){
            string s;
            int Ki;
            cin>>s>>Ki;
            
            int cnt=0;
            while(1){
                if(cnt==10){cout<<'\n';}
                if(Ki==0){break;}
                cout<<s;
                cnt++;
                Ki--;
            }
        }
    }
    
    return 0;
}
