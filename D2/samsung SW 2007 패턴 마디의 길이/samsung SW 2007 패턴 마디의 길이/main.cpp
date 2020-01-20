#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int T;
    cin>>T;
    
    for(int i=0;i<T;i++){
        string s;
        cin>>s;
        
        int result=0;
        int cnt=10;
        
        while(1){
          
        for(int j=0;j<cnt;j++){
            if(s[j]!=s[j+cnt]){break;}
            if(j==cnt-1){result=cnt;}
        }
            cnt--;
            if(cnt==0){break;}
        }
        cout<<"#"<<i+1<<' '<<result<<'\n';
    }
    return 0;
}
