#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int T;
    cin>>T;
    
    for(int t=1;t<=T;t++){
        int N;
        cin>>N;
        int result=0;
        int min=100000;
        int *arr=new int[N];
        for(int i=0;i<N;i++){
            cin>>arr[i];
            if(arr[i]>=0){
                if(min>arr[i]){min=arr[i];}
            }
            else{
                if(min>(-arr[i])){min=(-arr[i]);}
            }
        }
        for(int i=0;i<N;i++){
            if(min==arr[i]||min==(-arr[i])){result++;}
        }
        cout<<"#"<<t<<' '<<min<<' '<<result<<'\n';
    }
    return 0;
}
