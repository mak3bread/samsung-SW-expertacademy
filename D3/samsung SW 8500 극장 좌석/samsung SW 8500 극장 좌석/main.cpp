#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int T;cin>>T;
    for(int t=1;t<=T;t++){
        int N,max=0,result=0;cin>>N;
        int *arr=new int[N];
        for(int i=0;i<N;i++){
            cin>>arr[i];
            if(max<arr[i]){max=arr[i];}
            result+=arr[i]+1;
        }
        result+=max;
        cout<<"#"<<t<<' '<<result<<'\n';
        delete [] arr;
    }
    return 0;
}

