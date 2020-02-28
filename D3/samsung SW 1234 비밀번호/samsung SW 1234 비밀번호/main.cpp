#include <iostream>
#include <deque>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    for(int t=1;t<=10;t++){
        int N;
        string s;
        cin>>N>>s;
        deque<int> pwd;
        
        for(int i=0;i<N;i++){
            if(pwd.empty()){pwd.push_back(s[i]-48);}
            else{
                if(pwd.back()==s[i]-48){pwd.pop_back();}
                else{pwd.push_back(s[i]-48);}
            }
        }
        cout<<"#"<<t<<' ';
        while(1){
            if(pwd.empty()){break;}
            else{
                cout<<pwd.front();
                pwd.pop_front();
            }
        }
        cout<<'\n';
    }
    return 0;
}
