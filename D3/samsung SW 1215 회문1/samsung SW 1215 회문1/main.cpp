#include <stdio.h>
char map[8][9];
int main(){
    int N,chk,cnt;
    for(int t=1;t<=10;t++){
        cnt=0;
        scanf("%d",&N);
        for(int i=0;i<8;i++){
            scanf("%s",map[i]);
            for(int j=8-N;j>=0;j--){
                chk=0;
                for(int a=j,b=j+N-1;a<b;a++,b--){
                    if(map[i][a]!=map[i][b]){
                        chk++;break;
                    }
                }
                if(!chk){++cnt;}
            }
        }
        for(int j=0;j<8;j++){
            for(int i=8-N;i>=0;i--){
                chk=0;
                for(int a=i,b=i+N-1;a<b;a++,b--){
                    if(map[a][j]!=map[b][j]){
                        chk++;
                        break;
                    }
                }
                if(!chk){cnt++;}
            }
        }
        printf("#%d %d\n",t,cnt);
    }
    return 0;
}
