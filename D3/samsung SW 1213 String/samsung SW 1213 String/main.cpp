#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    for(int t=1;t<=10;t++){
        int tc,cnt=0;
        cin>>tc;
        string search,str;
        cin>>search>>str;
        for(int i=0;i<str.size();i++){
            int count=0,temp=i;
            bool tf=true;
            while(1){
                if(str[temp]==search[count]){
                    count++;
                    if(count==search.size()){break;}
                }
                else{tf=false;break;}
                temp++;
                if(temp==str.size()){tf=false;break;}
            }
            if(tf==true){cnt++;}
        }
        cout<<"#"<<t<<' '<<cnt<<'\n';
    }
    return 0;
}
