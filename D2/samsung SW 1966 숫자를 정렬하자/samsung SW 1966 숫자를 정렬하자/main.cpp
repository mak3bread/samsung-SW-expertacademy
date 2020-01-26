#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int T,N;
    cin>>T;
    
    for(int i=1;i<=T;i++){
        cin>>N;
        vector<int> arr(N,0);
        for(int j=0;j<N;j++){cin>>arr[j];}
        
        for(int j=0;j<N;j++){
            for(int k=0;k<N;k++){
                if(arr[j]<arr[k]){
                    int tmp=arr[k];
                    arr[k]=arr[j];
                    arr[j]=tmp;
                }
            }
        }
        cout<<"#"<<i<<' ';
        for(int j=0;j<N;j++)
        {
            cout<<arr[j]<<' ';
        }
        cout<<'\n';
        arr.clear();
    }
    
    return 0;
}
