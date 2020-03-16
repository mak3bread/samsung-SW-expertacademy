#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int T;cin>>T;
    for(int t=1;t<=T;t++){
        int N,K;cin>>N>>K;
        int *arr=new int[N+1];
        for(int i=0;i<=N;i++){arr[i]=0;}
        for(int i=0;i<K;i++){
            int temp;cin>>temp;
            arr[temp]++;
        }
        cout<<"#"<<t<<' ';
        for(int i=1;i<=N;i++){
            if(arr[i]!=1){cout<<i<<' ';}
        }
        cout<<'\n';
        delete [] arr;
    }
    return 0;
}
