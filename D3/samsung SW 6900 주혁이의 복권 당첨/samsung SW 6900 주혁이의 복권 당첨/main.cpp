#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int T;cin>>T;
    for(int t=1;t<=T;t++){
        int N,M,lotto=0;cin>>N>>M;
        string *arr=new string[N];
        int *money=new int[N];
        string *result=new string[M];
        for(int i=0;i<N;i++){cin>>arr[i]>>money[i];}
        for(int i=0;i<M;i++){cin>>result[i];}
        for(int i=0;i<M;i++){
            for(int j=0;j<N;j++){
                int tf=true;
                for(int k=0;k<8;k++){
                if(arr[j][k]=='*'||arr[j][k]==result[i][k]){continue;}
                else{tf=false;break;}
                }
                if(tf){lotto+=money[j];}
            }
        }
        cout<<"#"<<t<<' '<<lotto<<'\n';
        delete []arr;
        delete []money;
        delete []result;
    }
    return 0;
}
