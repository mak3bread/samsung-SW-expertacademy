#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int T;cin>>T;
    for(int t=1;t<=T;t++){
        string now,pro;cin>>now>>pro;
        int nowH=(now[0]-48)*10+(now[1]-48);
        int nowM=(now[3]-48)*10+(now[4]-48);
        int nowS=(now[6]-48)*10+(now[7]-48);
        int proH=(pro[0]-48)*10+(pro[1]-48);
        int proM=(pro[3]-48)*10+(pro[4]-48);
        int proS=(pro[6]-48)*10+(pro[7]-48);
        int resultH=0,resultM=0,resultS=0;
        if(proS>=nowS){
            resultS=proS-nowS;
            if(proM>=nowM){
                resultM=proM-nowM;
                if(proH>=nowH){resultH=proH-nowH;}
                else{resultH=proH-nowH+24;}
            }
            else{
                resultM=proM-nowM+60;
                proH--;
                if(proH>=nowH){resultH=proH-nowH;}
                else{resultH=proH-nowH+24;}
            }
        }
        else{
            resultS=proS-nowS+60;
            proM--;
            if(proM>=nowM){
                resultM=proM-nowM;
                if(proH>=nowH){resultH=proH-nowH;}
                else{resultH=proH-nowH+24;}
            }
            else{
                resultM=proM-nowM+60;
                proH--;
                if(proH>=nowH){resultH=proH-nowH;}
                else{resultH=proH-nowH+24;}
            }
        }
        cout<<"#"<<t<<' ';
        if(resultH<10){cout<<0;}
        cout<<resultH<<":";
        if(resultM<10){cout<<0;}
        cout<<resultM<<":";
        if(resultS<10){cout<<0;}
        cout<<resultS<<'\n';
    }
    return 0;
}
