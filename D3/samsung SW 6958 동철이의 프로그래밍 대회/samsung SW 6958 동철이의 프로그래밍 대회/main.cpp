#include <iostream>
#include <vector>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int T;cin>>T;
    for(int t=1;t<=T;t++){
        int N,M;
        cin>>N>>M;
        vector<vector<int>> map(N,vector<int>(M,0));
        int *arr=new int[N];
        for(int i=0;i<N;i++){
            int cnt=0;
            for(int j=0;j<M;j++){
                cin>>map[i][j];
                if(map[i][j]==1){cnt++;}
            }
            arr[i]=cnt;
        }
        int max=arr[0];
        int count=0;
        for(int i=0;i<N;i++){
            if(max==arr[i]){count++;}
            if(max<arr[i]){max=arr[i];count=1;}
        }
        cout<<"#"<<t<<' '<<count<<' '<<max<<'\n';
        for(int i=0;i<N;i++){map[i].clear();}
        map.clear();
        delete [] arr;
    }
    return 0;
}
