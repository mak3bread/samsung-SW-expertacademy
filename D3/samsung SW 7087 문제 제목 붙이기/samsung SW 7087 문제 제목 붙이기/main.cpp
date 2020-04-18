#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int T;cin>>T;
    for(int t=1;t<=T;t++){
        int N,cnt=0;cin>>N;
        string *arr=new string[N];
        int alpha[26]={0,};
        for(int i=0;i<N;i++){
            cin>>arr[i];
            alpha[arr[i][0]-65]++;
        }
        for(int i=0;i<26;i++){
            if(alpha[i]>=1){cnt++;}
            else{break;}
        }
        cout<<"#"<<t<<' '<<cnt<<'\n';
        delete[] arr;
    }
    return 0;
}
