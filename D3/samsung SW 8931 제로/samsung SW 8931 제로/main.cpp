#include <iostream>
#include <stack>
using namespace std;
int main(){
    ios_base::sync_with_stdio();
    cin.tie(0);cout.tie(0);
    int T;cin>>T;
    for(int t=1;t<=T;t++){
        int K,sum=0;cin>>K;
        stack<int> st;
        for(int i=0;i<K;i++){
            int temp;cin>>temp;
            if(temp==0){
                if(st.empty()){continue;}
                else{st.pop();}
            }
            else{st.push(temp);}
        }
        while(1){
            if(st.empty()){break;}
            else{sum+=st.top();st.pop();}
        }
        cout<<"#"<<t<<' '<<sum<<'\n';
    }
    return 0;
}
