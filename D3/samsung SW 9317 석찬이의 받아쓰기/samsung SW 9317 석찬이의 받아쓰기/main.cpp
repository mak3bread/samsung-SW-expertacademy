#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin>>T;
    for(int t=1;t<=T;t++){
        int N,cnt=0;
        string str,write;
        cin>>N;
        cin>>str;
        cin>>write;
        for(int i=0;i<N;i++){
            if(str[i]==write[i]){cnt++;}
        }
        cout<<"#"<<t<<' '<<cnt<<'\n';
    }
    return 0;
}
