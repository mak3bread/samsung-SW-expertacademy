#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int T;cin>>T;
    for(int t=1;t<=T;t++){
        int N;cin>>N;
        string *arr=new string[N];
        for(int i=0;i<N;i++){cin>>arr[i];}
        cout<<"#"<<t;
        if(N%2==0){
            for(int i=0;i<N/2;i++){
                cout<<' '<<arr[i]<<' '<<arr[N/2+i];
            }
        }
        else{
          for(int i=0;i<N/2;i++){
                cout<<' '<<arr[i]<<' '<<arr[N/2+i+1];
            }
            cout<<' '<<arr[N/2];
        }
        cout<<'\n';
        delete []arr;
    }
    return 0;
}
