#include <iostream>
#include <vector>
using namespace std;

struct docu{
    int num=0;
    string s;
};
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int T;
    cin>>T;
    
    for(int test=1;test<=T;test++){
        int N;
        cin>>N;
        int sum=0;
        
        vector<docu*> doc;
        for(int i=0;i<N;i++){
            docu* dc=new docu;
            cin>>dc->s>>dc->num;
            doc.push_back(dc);
            sum+=dc->num;
        }
        int i=0,j=0;
        int cnt=0;
        
        cout<<"#"<<test<<'\n';
        while(1){
            cout<<doc[i]->s;
            cnt++;
            j++;
            if(cnt%10==0&&cnt!=0){cout<<'\n';}
            if(doc[i]->num==j){j=0;i++;}
            if(sum==cnt){break;}
        }
        cout<<'\n';
        doc.clear();
    }
    
    return 0;
}
