#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int T;
    cin>>T;
    
    for(int i=1;i<=T;i++){
        vector<vector<int>> map(9,vector<int>(9,0));
        bool tf=false;
        
        for(int j=0;j<9;j++){
            for(int k=0;k<9;k++){
                cin>>map[j][k];
            }
        }
        
        for(int j=0;j<9;j++){
            int garo=0;
            int sero=0;
            for(int k=0;k<9;k++){
                garo+=map[j][k];
                sero+=map[k][j];
            }
            if(garo!=45||sero!=45){tf=true;}//가로 세로
        }
        
        for(int j=0;j<9;j+=3){
            for(int k=0;k<9;k+=3){
                int sum=0;
                for(int a=j;a<j+3;a++){
                    for(int b=k;b<k+3;b++){
                        sum+=map[a][b];
                    }
                }
                if(sum!=45){tf=true;}//정사각형
            }
        }
        
        if(tf==true){cout<<"#"<<i<<' '<<0<<'\n';}
        else{cout<<"#"<<i<<' '<<1<<'\n';}
        
        for(int j=0;j<9;j++){
            map[j].clear();
        }
        map.clear();
    }
    
    return 0;
}
