#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int T;cin>>T;
    for(int t=1;t<=T;t++){
        int N,D,cnt=0; cin>>N>>D;
        int *arr = new int[N];
        for(int i=0;i<N;i++){cin>>arr[i];}
        for(int i=0;i<N;i++){
            int temp=0;
            for(int j=0;j<N;j++){
                if(arr[i+j]==0){
                    temp++;
                    if(temp>=D){i=i+j;break;}
                }
                else{break;}
            }
            if(temp>=D){arr[i]=1;cnt++;}
        }
        cout<<"#"<<t<<' '<<cnt<<'\n';
        delete [] arr;
    }
    return 0;
}
