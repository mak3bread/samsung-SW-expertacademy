#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int T;cin>>T;
    for(int t=1;t<=T;t++){
        int N,cnt=0,sum=0;cin>>N;
        int *arr=new int[N];
        for(int i=0;i<N;i++){
            cin>>arr[i];
            sum+=arr[i];
        }
        sum/=N;
        for(int i=0;i<N;i++){
            if(arr[i]<sum){
                cnt+=sum-arr[i];
            }
        }
        cout<<"#"<<t<<' '<<cnt<<'\n';
        delete [] arr;
    }
    return 0;
}
