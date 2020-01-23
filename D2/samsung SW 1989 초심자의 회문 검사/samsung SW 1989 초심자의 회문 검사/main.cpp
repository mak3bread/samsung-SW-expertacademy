#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int T;
    cin>>T;
    
    for(int i=1;i<=T;i++){
        string s;
        cin>>s;
        bool tf=true;
        unsigned long length=s.size()-1;
        
        for(int j=0;j<=length/2;j++){
            if(s[j]==s[length-j]){continue;}
            else{tf=false;}
        }
        
        if(tf==true){
            cout<<"#"<<i<<' '<<"1"<<'\n';
        }
        else{ cout<<"#"<<i<<' '<<"0"<<'\n';}
    }
    
    return 0;
}
