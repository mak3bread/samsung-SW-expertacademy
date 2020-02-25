#include <iostream>
#include <queue>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    for(int t=1;t<=10;t++){
        int tc,cnt=1;
        cin>>tc;
        queue<int> q;
        for(int i=0;i<8;i++){
            int input;
            cin>>input;
            q.push(input);
        }
        while(1){
            q.front()=q.front()-cnt;
            if(q.front()<=0){q.push(0);q.pop();break;}
            q.push(q.front());
            q.pop();
            cnt++;
            if(cnt>=6){cnt=1;}
        }
        cout<<"#"<<tc<<' ';
        for(int i=0;i<8;i++){cout<<q.front();cout<<' ';q.pop();}
        cout<<'\n';
    }
    return 0;
}
