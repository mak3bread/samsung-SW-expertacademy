#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int T;cin>>T;
    for(int t=1;t<=T;t++){
        string s;cin>>s;
        bool tf=true;
        int S[13],D[13],H[13],C[13];
        for(int i=0;i<13;i++){S[i]=0;D[i]=0;H[i]=0;C[i]=0;}
        int S_result=13,D_result=13,H_result=13,C_result=13;
        for(int i=0;i<s.size();i=i+3){
            if(s[i]=='S'){
                if(s[i+1]-48==0){
                    if(S[s[i+2]-49]>=1){tf=false;break;}
                    else{S[s[i+2]-49]++;}
                }
                else{
                    int temp=10+s[i+2]-49;
                    if(S[temp]>=1){tf=false;break;}
                    else{S[temp]++;}
                }
            }
            else if(s[i]=='D'){
                if(s[i+1]-48==0){
                    if(D[s[i+2]-49]>=1){tf=false;break;}
                    else{D[s[i+2]-49]++;}
                }
                else{
                    int temp=10+s[i+2]-49;
                    if(D[temp]>=1){tf=false;break;}
                    else{D[temp]++;}
                }
            }
            else if(s[i]=='H'){
                if(s[i+1]-48==0){
                    if(H[s[i+2]-49]>=1){tf=false;break;}
                    else{H[s[i+2]-49]++;}
                }
                else{
                    int temp=10+s[i+2]-49;
                    if(H[temp]>=1){tf=false;break;}
                    else{H[temp]++;}
                }
            }
            else if(s[i]=='C'){
                if(s[i+1]-48==0){
                    if(C[s[i+2]-49]>=1){tf=false;break;}
                    else{C[s[i+2]-49]++;}
                }
                else{
                    int temp=10+s[i+2]-49;
                    if(C[temp]>=1){tf=false;break;}
                    else{C[temp]++;}
                }
            }
            else{continue;}
        }
        if(tf==false){cout<<"#"<<t<<' '<<"ERROR"<<'\n';}
        else{
            for(int i=0;i<13;i++){
                if(S[i]==1){S_result--;}
                if(D[i]==1){D_result--;}
                if(H[i]==1){H_result--;}
                if(C[i]==1){C_result--;}
            }
            cout<<"#"<<t<<' '<<S_result<<' '<<D_result<<' '<<H_result<<' '<<C_result<<'\n';
            
        }
    }
    return 0;
}
