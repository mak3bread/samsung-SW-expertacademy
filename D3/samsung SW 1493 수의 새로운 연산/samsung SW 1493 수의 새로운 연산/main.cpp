#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int T;cin>>T;
    for(int t=1;t<=T;t++){
        int p,q,sum=0;cin>>p>>q;
        int x,y,w,z;
        int cnt=1;
        while(1){
            int temp=(cnt*(cnt+1))/2;
            if(temp==p){x=cnt;y=1;break;}
            if(temp>p){
                temp-=cnt;
                int tmp2=p-temp-1;
                x=1;y=cnt;
                for(int i=0;i<tmp2;i++){
                    x++;y--;
                }
                break;
            }
            cnt++;
        }
        cnt=1;
        while(1){
            int temp=(cnt*(cnt+1))/2;
            if(temp==q){z=cnt;w=1;break;}
            if(temp>q){
                temp-=cnt;
                int tmp2=q-temp-1;
                z=1;w=cnt;
                for(int i=0;i<tmp2;i++){
                    z++;w--;
                }
                break;
            }
            cnt++;
        }
        int X=x+z,Y=y+w;
        cnt=1;
        while(1){
            sum+=cnt;
            if(cnt==X+Y-1){
                int x1=X+Y-1,y1=1;
                while(1){
                    if(x1==X&&y1==Y){break;}
                    x1--;y1++;
                    sum--;
                }
                break;
            }
            cnt++;
        }
        cout<<"#"<<t<<' '<<sum<<'\n';
    }
    return 0;
}
