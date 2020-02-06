#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int T;
    cin>>T;

    for(int t=1;t<=T;t++){
        int N;
        cin>>N;
        int s=0;
        int ver=0;
        for(int i=0;i<N;i++){
            int tf,acc;
            cin>>tf;
            if(tf==0){}
            else{
            cin>>acc;
            if(tf==1){ver+=acc;}
            if(tf==2){
                if(ver>=acc){ver-=acc;}
                else{ver=0;}
            }
            }
            s+=ver;
        }
        cout<<"#"<<t<<' '<<s<<'\n';
    }
    return 0;
}
