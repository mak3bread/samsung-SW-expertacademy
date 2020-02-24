//재귀 x
/*
 #include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    for(int t=1;t<=10;t++){
        int tc;
        cin>>tc;
        int N,M;
        cin>>N>>M;
        int result=1;
        for(int i=0;i<M;i++){
            result*=N;
        }
        cout<<"#"<<tc<<' '<<result<<'\n';
    }
    return 0;
}
*/
//재귀 0
#include <iostream>
using namespace std;

void recur(int a,int b,int result,int tc){
    if(b==0){cout<<"#"<<tc<<' '<<result<<'\n';}
    else{
        result*=a;
        b--;
        recur(a,b,result,tc);
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    for(int t=1;t<=10;t++){
        int tc;
        cin>>tc;
        int N,M;
        cin>>N>>M;
        int result=1;
        if(N==0){cout<<"#"<<tc<<' '<<0<<'\n';}
        else if(M==0){cout<<"#"<<tc<<' '<<1<<'\n';}
        else{recur(N,M,result,tc);}
    }
    return 0;
}

