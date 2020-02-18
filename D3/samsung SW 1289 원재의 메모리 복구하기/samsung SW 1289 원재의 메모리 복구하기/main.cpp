#include <iostream>
using namespace std;
int main(){
   ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin>>T;
    for(int t=1;t<=T;t++){
        string s,a;
        cin>>s;a=s;
        for(int i=0;i<s.size();i++){a[i]=48;}
        int cnt=0;
        for(int i=0;i<s.size();i++){
            if(a==s){break;}
            if(a[i]==s[i]){continue;}
            if((int)s[i]==48){
                cnt++;for(int j=i;j<s.size();j++){a[j]=48;}
            }
            else{
                cnt++;for(int j=i;j<s.size();j++){a[j]=49;}
            }
        }
        cout<<"#"<<t<<' '<<cnt<<'\n';
    }
    return 0;
}


