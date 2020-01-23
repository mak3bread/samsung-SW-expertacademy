#include <iostream>
using namespace std;

struct student{
    float mid=0;
    float fi_nal=0;
    float assign=0;
    float score=0;
    string result;
};

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int T;
    cin>>T;
    string s[10]={"A+","A0","A-","B+","B0","B-","C+","C0","C-","D0"};
    
    for(int i=1;i<=T;i++){
    int N,K;
    cin>>N>>K;
        
    student sd[N];
        
    int same=N/10;
    float* sort=new float[N];
        
        for(int j=0;j<N;j++){
            cin>>sd[j].mid>>sd[j].fi_nal>>sd[j].assign;
            sd[j].score=sd[j].mid*0.35+sd[j].fi_nal*0.45+sd[j].assign*0.2;
            sort[j]=sd[j].score;
        }
        
        for(int j=0;j<N;j++){
            for(int k=0;k<N;k++){
                if(sort[j]>sort[k]){
                    float temp=sort[k];
                    sort[k]=sort[j];
                    sort[j]=temp;
                }
            }
        }
       
        for(int j=0;j<N;j++){
            for(int k=0;k<N;k++){
                if(sort[j]==sd[k].score){
                    sd[k].result=s[j/same];
                    break;
                }
            }
        }
        
        cout<<"#"<<i<<' '<<sd[K-1].result<<'\n';
        delete [] sort;
    }
    
    return 0;
}
