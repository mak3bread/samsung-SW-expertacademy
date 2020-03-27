#include <cstdio>
int main(){
    int T;scanf("%d",&T);
    for(int t=1;t<=T;t++){
        int N;scanf("%d",&N);
        double money=0;
        for(int i=0;i<N;i++){
            double p;int x;
            scanf("%lf %d",&p,&x);
            money+=p*x;
        }
        printf("#%d %6lf\n",t,money);
    }
    return 0;
}
