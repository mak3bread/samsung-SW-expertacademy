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
        int most=0;
        int arr[101]={0,};
        
        for(int i=0;i<1000;i++){
            int a;
            cin>>a;
            for(int j=0;j<=100;j++){
                if(a==j){
                    arr[j]++;
                    break;
                }
            }
        }
        
        for(int i=0;i<=100;i++){
            if(arr[i]>=arr[most]){
                if(arr[i]==arr[most]){
                    if(i>most){most=i;}
                    else{continue;}
                }
                else{
                most=i;
                }
            }
        }
        cout<<"#"<<N<<' '<<most<<'\n';
    }
    return 0;
}
