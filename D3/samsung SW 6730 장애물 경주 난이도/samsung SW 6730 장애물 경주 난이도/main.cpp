#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin>>T;
    for(int t=1;t<=T;t++){
        int N,up=0,down=0;;
        cin>>N;
        int *arr=new int[N];
        for(int i=0;i<N;i++){
            cin>>arr[i];
        }
        for(int i=0;i<N-1;i++){
            if(arr[i]-arr[i+1]==0){continue;}
            else if(arr[i]-arr[i+1]<0){
                if(up<arr[i+1]-arr[i]){up=arr[i+1]-arr[i];}
            }
            else{
                if(down<arr[i]-arr[i+1]){down=arr[i]-arr[i+1];}
            }
        }
        cout<<"#"<<t<<' '<<up<<' '<<down<<'\n';
        delete [] arr;
    }
    return 0;
}
