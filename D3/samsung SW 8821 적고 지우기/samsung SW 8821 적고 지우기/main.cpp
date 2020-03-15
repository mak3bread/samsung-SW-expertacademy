#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int T;cin>>T;
    for(int t=1;t<=T;t++){
        string s;cin>>s;
        int arr[10]={0,},result=0;
        for(int i=0;i<s.size();i++){
            arr[s[i]-48]++;
        }
        for(int i=0;i<10;i++){
            if(arr[i]%2==1){result++;}
        }
        cout<<"#"<<t<<' '<<result<<'\n';
    }
    return 0;
}
