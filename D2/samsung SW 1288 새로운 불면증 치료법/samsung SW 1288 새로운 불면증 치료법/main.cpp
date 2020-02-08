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
          int check[10]={0,};
          int num=0;
          int real=N;
          int cnt=2;
          int MAX=0;
          while(num!=10){
              MAX=max(MAX,real);
              int a=real%10;
              if(check[a]==0){
                  check[a]=1;
                  num++;
              }
              if(real/10==0){
                  real=N*cnt;
                  cnt++;
              }
              else{real/=10;}
          }
          cout<<"#"<<t<<' '<<MAX<<'\n';
      }
    return 0;
}
