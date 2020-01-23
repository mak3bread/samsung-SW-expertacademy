#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int T;
    cin>>T;
    
    for(int i=1;i<=T;i++){
        int N;
        cin>>N;
        int sum=0;
        for(int j=1;j<=N;j++){
            if(j%2==0){
                sum-=j;
            }
            else{
                sum+=j;
            }
        }
        cout<<"#"<<i<<' '<<sum<<'\n';
    }
    return 0;
}
