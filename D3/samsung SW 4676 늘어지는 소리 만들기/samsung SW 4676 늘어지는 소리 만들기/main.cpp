#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int T;cin>>T;
    for(int t=1;t<=T;t++){
        string s;cin>>s;
        int H;cin>>H;
        int index[21]={0,};
        for(int i=0;i<H;i++){
            int temp;cin>>temp;
            index[temp]++;
        }
        int cnt=0;
        cout<<"#"<<t<<' ';
        while(1){
           if (index[cnt] != 0){
               for (int i = 0; i < index[cnt]; ++i){cout<<"-";}
            }
            if (s[cnt] == '\0'){break;}
            cout<<s[cnt];
            cnt++;
        }
        cout<<'\n';
    }
    return 0;
}
