#include <iostream>
#include <vector>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int T;cin>>T;
    for(int t=1;t<=T;t++){
        vector<vector<string>> map(15,vector<string>(15,"-1"));
        for(int i=0;i<5;i++){
            string temp;cin>>temp;
            for(int j=0;j<temp.size();j++){map[i][j]=temp[j];}
        }
        cout<<"#"<<t<<' ';
        for(int i=0;i<15;i++){
            for(int j=0;j<5;j++){
                if(map[j][i]=="-1"){continue;}
                cout<<map[j][i];
            }
        }
        cout<<'\n';
        for(int i=0;i<15;i++){map[i].clear();}
        map.clear();
    }
    return 0;
}
