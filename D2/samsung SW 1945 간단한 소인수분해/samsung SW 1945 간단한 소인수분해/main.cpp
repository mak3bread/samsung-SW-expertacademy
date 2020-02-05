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
        int a=0,b=0,c=0,d=0,e=0;
        while(1){
            if(N==1){break;}
            if(N>=2&&N%2==0){a++;N=N/2;continue;}
            if(N>=3&&N%3==0){b++;N=N/3;continue;}
            if(N>=5&&N%5==0){c++;N=N/5;continue;}
            if(N>=7&&N%7==0){d++;N=N/7;continue;}
            if(N>=11&&N%11==0){e++;N=N/11;continue;}
        }
        cout<<"#"<<t<<' '<<a<<' '<<b<<' '<<c<<' '<<d<<' '<<e<<'\n';
    }
    return 0;
}
