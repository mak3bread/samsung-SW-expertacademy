#include <iostream>
#include <vector>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    for(int t=1;t<=10;t++){
        int N,M,x,y;cin>>N;
        vector<int> arr(400,0);
        for(int i=0;i<N;i++){cin>>arr[i];}
        cin>>M;
        for(int i=0;i<M;i++){
            string s;cin>>s;
            if(s=="I"){
                cin>>x>>y;
                for(int j=N+y-1;j>=x+y;j--){
                    arr[j]=arr[j-y];
                }
                for(int j=x;j<x+y;j++){cin>>arr[j];}
                N+=y;
            }
            else if(s=="D"){
                cin>>x>>y;
                for(int j=x;j<N-y;j++){
                    arr[j]=arr[j+y];
                }
                N-=y;
            }
            else{continue;}
        }
        cout<<"#"<<' '<<t<<' ';
        for(int i=0;i<10;i++){cout<<' '<<arr[i];}
        cout<<'\n';
        arr.clear();
    }
    return 0;
}

