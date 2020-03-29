#include <iostream>
#include <vector>
using namespace std;
vector<string> str={"ZRO","ONE","TWO","THR","FOR","FIV","SIX","SVN","EGT","NIN"};
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int T;cin>>T;
    for(int t=1;t<=T;t++){
        int N;string s;cin>>s>>N;
        int cnt[10]={0,};
        for(int i=0;i<N;i++){
            string temp;cin>>temp;
            for(int j=0;j<10;j++){
                if(str[j]==temp){cnt[j]++;break;}
            }
        }
        cout<<s<<'\n';
        for(int i=0;i<10;i++){
            for(int j=0;j<cnt[i];j++){
                cout<<' '<<str[i];
            }
        }
        cout<<'\n';
    }
    return 0;
}
