#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio();
    cin.tie(0);
    int T;
    cin>>T;
    for(int i=0;i<T;i++){
        string s;
        cin>>s;
        if(s.size()!=8){cout<<"#"<<i+1<<' '<<-1<<'\n';continue;}
        else{
            int year=(s[0]-48)*1000+(s[1]-48)*100+(s[2]-48)*10+(s[3]-48);
            int month=(s[4]-48)*10+(s[5]-48);
            int day=(s[6]-48)*10+(s[7]-48);
            
            if(month>=1&&month<=12){
if(month==1||month==3||month==5||month==7||month==8||month==10||month==12){
                    if(day>=1&&day<=31){
                        cout<<"#"<<i+1<<' '<<s[0]<<s[1]<<s[2]<<s[3]<<'/'<<s[4]<<s[5]<<'/'<<s[6]<<s[7]<<'\n';
                    }
                    else{cout<<"#"<<i+1<<' '<<-1<<'\n';}
                }
                if(month==2){
                    if(day>=1&&day<=28){
                       cout<<"#"<<i+1<<' '<<s[0]<<s[1]<<s[2]<<s[3]<<'/'<<s[4]<<s[5]<<'/'<<s[6]<<s[7]<<'\n';
                    }
                    else{cout<<"#"<<i+1<<' '<<-1<<'\n';}
                }
                if(month==4||month==6||month==9||month==11){
                    if(day>=1&&day<=30){
                        cout<<"#"<<i+1<<' '<<s[0]<<s[1]<<s[2]<<s[3]<<'/'<<s[4]<<s[5]<<'/'<<s[6]<<s[7]<<'\n';
                    }
                    else{cout<<"#"<<i+1<<' '<<-1<<'\n';}
                }
            }
            else{cout<<"#"<<i+1<<' '<<-1<<'\n';continue;}
        }
    }
return 0;
}
