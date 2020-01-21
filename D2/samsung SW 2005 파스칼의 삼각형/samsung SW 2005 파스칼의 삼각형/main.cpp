#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int T;
    cin>>T;
    for(int i=0;i<T;i++){
    int N;
    cin>>N;
        int arr[10];
        cout<<"#"<<i+1<<'\n';
        
        for(int j=0;j<10;j++){
            arr[j]=1;
        }
        
        for(int j=1;j<=N;j++){
            int temp[10];
            for(int k=0;k<10;k++){
                temp[k]=1;
            }
            if(j>=3){
                for(int k=0;k<j;k++){
                    if(k==0||k==j-1){continue;}
                    else{temp[k]=arr[k]+arr[k-1];}
                }
            }
            
            for(int k=0;k<j;k++){
                arr[k]=temp[k];
                cout<<arr[k]<<' ';
            }
            cout<<'\n';
        }
    }
    return 0;
}
