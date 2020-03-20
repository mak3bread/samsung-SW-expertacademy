#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int T;cin>>T;
    for(int t=1;t<=T;t++){
        int N,K,max=0;cin>>N>>K;
        int *arr=new int[N];
        for(int i=0;i<N;i++){cin>>arr[i];}
        for(int i=0;i<K;i++){
            int temp=0;
            for(int j=0;j<N;j++){
                if(temp<=arr[j]){temp=arr[j];}
            }
            for(int j=0;j<N;j++){if(temp==arr[j]){arr[j]=0;break;}}
            max+=temp;
        }
        cout<<"#"<<t<<' '<<max<<'\n';
        delete [] arr;
    }
    return 0;
}
