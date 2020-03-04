#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);int T;cin>>T;
    for(int t=1;t<=T;t++){
        string X;cin>>X;
        int cnt=0;
        int arr[10]={0,};
        for(int i=0;i<X.size();i++){
            arr[X[i]-48]++;
        }
        for(int i=0;i<10;i++){
            if(arr[i]!=0){cnt++;}
        }
        cout<<"#"<<t<<' '<<cnt<<'\n';
    }
    return 0;
}
