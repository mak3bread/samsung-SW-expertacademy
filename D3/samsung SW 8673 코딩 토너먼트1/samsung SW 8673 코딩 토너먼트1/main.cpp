#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int T;
    cin>>T;
    
    for(int t=1;t<=T;t++){
        int K,result=0,N=1;
        cin>>K;
        for(int i=0;i<K;i++){N*=2;}
        int *arr=new int[N];
        
        for(int i=0;i<N;i++){cin>>arr[i];}
        
    for(int k=0;k<K;k++){
        for(int i=0;i<N;i++){
            if(arr[i]==0){continue;}
            for(int j=i+1;j<N;j++){
                if(arr[j]==0){continue;}
                else{
                    if(arr[i]>=arr[j]){
                        result+=arr[i]-arr[j];
                        arr[j]=0;
                        i=j;
                        break;
                    }
                    else{
                        result+=arr[j]-arr[i];
                        arr[i]=0;
                        i=j;
                        break;
                    }
                }
            }
        }
    }
        cout<<"#"<<t<<' '<<result<<'\n';
        delete [] arr;
    }
    return 0;
}
