#include <iostream>
using namespace std;
int year[12]={31,28,31,30,31,30,31,31,30,31,30,31};
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin>>T;
    
    for(int test=1;test<=T;test++){
        int mon1,mon2,day1,day2;
        cin>>mon1>>day1>>mon2>>day2;
        int result=0;
        if(mon2==mon1){cout<<"#"<<test<<' '<<day2-day1+1<<'\n';}
        else{
            result+=year[mon1-1]-day1+1;
            int cnt=mon1;
        while(1){
            if(cnt==mon2-1){result+=day2;break;}
            else{result+=year[cnt];}
            cnt++;
        }
            cout<<"#"<<test<<' '<<result<<'\n';
      }
    }
    return 0;
}
