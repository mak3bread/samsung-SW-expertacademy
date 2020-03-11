#include <iostream>
#include <vector>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int T;cin>>T;
    for(int t=1;t<=T;t++){
        int N,M,max=0;
        cin>>N>>M;
        vector<int> vc;
        int* arr=new int[N+M+1];
        for(int i=0;i<N+M+1;i++){arr[i]=0;}
        for(int i=1;i<=N;i++){
            for(int j=1;j<=M;j++){
                arr[i+j]++;
            }
        }
        for(int i=0;i<N+M+1;i++){
            if(max<arr[i]){max=arr[i];}
        }
        for(int i=0;i<N+M+1;i++){
            if(max==arr[i]){vc.push_back(i);}
        }
        cout<<"#"<<t<<' ';
        for(int i=0;i<vc.size();i++){cout<<vc[i]<<' ';}
        cout<<'\n';
        delete [] arr;
        vc.clear();
    }
    return 0;
}
