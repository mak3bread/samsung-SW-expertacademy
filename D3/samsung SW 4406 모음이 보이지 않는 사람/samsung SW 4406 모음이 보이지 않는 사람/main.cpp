#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin>>T;
    for(int t=1;t<=T;t++){
        string s;
        cin>>s;
        cout<<"#"<<t<<' ';
        for(int i=0;i<s.size();i++){
            if(s[i]!='a'&&s[i]!='e'&&s[i]!='i'&&s[i]!='o'&s[i]!='u'){cout<<s[i];}
        }
        cout<<'\n';
    }
    return 0;
}
