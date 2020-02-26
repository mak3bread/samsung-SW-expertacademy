#include <iostream>
#include <vector>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    for(int t=1;t<=10;t++){
        int N,cnt=0;
        cin>>N;
        vector<vector<int>> map(N,vector<int>(N,0));
        for(int i=0;i<100;i++){
            for(int j=0;j<100;j++){cin>>map[i][j];}
        }
        for(int i=0;i<100;i++){
            for(int j=0;j<100;j++){
                if(map[j][i]==1){
                    for(int k=j;k<100;k++){
                        if(map[k][i]==2){cnt++;j=k;break;}
                    }
                }
            }
        }
        cout<<"#"<<t<<' '<<cnt<<'\n';
        for(int i=0;i<100;i++){map[i].clear();}
        map.clear();
    }
    return 0;
}
