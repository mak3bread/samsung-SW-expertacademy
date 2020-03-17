#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    for(int t=1;t<=10;t++){
        int T,cnt=0;cin>>T;
        int *arr=new int[T];
        for(int i=0;i<T;i++){cin>>arr[i];}
        for(int i=2;i<T;i++){
            int temp=256;
            for(int j=i-2;j<=i+2;j++){
                if(i==j){continue;}
                if(j>=T||arr[i]-arr[j]<=0){temp=0;break;}
                if((temp>arr[i]-arr[j])){temp=arr[i]-arr[j];}
            }
            cnt+=temp;
        }
        cout<<"#"<<t<<' '<<cnt<<'\n';
        delete [] arr;
    }
    return 0;
}
