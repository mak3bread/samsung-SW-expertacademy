#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int T;
    cin>>T;
    
    for(int i=1;i<=T;i++){
        int h1,m1,h2,m2;
        cin>>h1>>m1>>h2>>m2;
        int result_h=0,result_m=0;
        
        if(h1+h2>12){
            result_h=h1+h2-12;
        }
        else{
            result_h=h1+h2;
        }
        if(m1+m2>=60){
            result_h++;
            result_m=m1+m2-60;
        }
        else{
            result_m=m1+m2;
        }
        
        cout<<"#"<<i<<' '<<result_h<<' '<<result_m<<'\n';
    }
    
    return 0;
}
