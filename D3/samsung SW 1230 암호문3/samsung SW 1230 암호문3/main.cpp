#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    for(int t=1;t<=10;t++){
        int N,M;
        cin>>N;
        vector<int> pw;
        for(int i=0;i<N;i++){
            int temp;cin>>temp;
            pw.push_back(temp);
        }
        cin>>M;
        for(int i=0;i<M;i++){
            string s;
            cin>>s;
            if(s=="I"){
                int x,y;
                cin>>x>>y;
                vector<int> insert(y,0);
                for(int j=0;j<y;j++){
                    cin>>insert[j];
                    pw.push_back(0);
                }
                for(int j=pw.size();j>=x;j--){pw[j]=pw[j-y];}
                for(int j=0;j<y;j++){
                    pw[x]=insert[j];
                    x++;
                }
                insert.clear();
            }
            else if(s=="D"){
                int x,y;
                cin>>x>>y;
                for(int j=x;j<pw.size()-y;j++){
                    pw[j]=pw[j+y];
                }
                for(int j=0;j<y;j++){pw.pop_back();}
            }
            else if(s=="A"){
                int y,add;
                cin>>y;
                for(int j=0;j<y;j++){
                    cin>>add;
                    pw.push_back(add);
                }
            }
            else{continue;}
        }
       cout<<"#"<<t<<' ';
              for(int i=0;i<10;i++){
                  cout<<pw[i]<<' ';
        }
        cout<<'\n';
        pw.clear();
    }
    return 0;
}
