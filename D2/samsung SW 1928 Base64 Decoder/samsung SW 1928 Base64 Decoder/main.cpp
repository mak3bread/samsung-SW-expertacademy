#include <stdio.h>
int DecodeMap[128];
void init(void){
    for(int i=0;i<26;i++){DecodeMap['A'+i]=i;}
    for(int i=0;i<26;i++){DecodeMap['a'+i]=i+26;}
    for(int i=0;i<11;i++){DecodeMap['0'+i]=i+52;}
    DecodeMap['+']=62;
    DecodeMap['/']=63;
}
int main(){

    int T;
    scanf("%d",&T);
    init();
    for(int t=1;t<=T;t++){
        int cnt=0,num=0;
        char DATA[300]={0};
        scanf("%s",DATA);
        printf("#%d ",t);
        while(DATA[cnt]){
            num+=DecodeMap[DATA[cnt]]<<6*(3-cnt%4);
            ++cnt;
            if(cnt%4==0){
                printf("%c%c%c",(num>>16)&0xFF,(num>>8)&0xFF,(num>>0)&0xFF);
                num=0;
            }
        }
       printf("\n");
    }
    return 0;
}
