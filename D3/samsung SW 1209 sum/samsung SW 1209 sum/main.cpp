#include <iostream>
#include <vector>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    for(int t=1;t<=10;t++){
        int T;cin>>T;
        int max=0,cnt=0,dagak1=0,dagak2=0;
        int map[100][100]={0,};
        for(int i=0;i<100;i++){
            int tmp1=0;
            for(int j=0;j<100;j++){
                cin>>map[i][j];
                tmp1+=map[i][j];
                if(i==j){dagak1+=map[i][j];}
            }
            if(tmp1>max){max=tmp1;}
        }
        for(int i=0;i<100;i++){
            int tmp2=0;
            for(int j=0;j<100;j++){tmp2+=map[j][i];}
            if(tmp2>max){max=tmp2;}
        }
        for(int i=99;i>=0;i--){
            dagak2+=map[cnt][i];
            cnt++;
        }
        if(dagak1>max){max=dagak1;}
        if(dagak2>max){max=dagak2;}
        cout<<"#"<<t<<' '<<max<<'\n';
    }
    return 0;
}
