#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int T;cin>>T;
    for(int t=1;t<=T;t++){
        string A,B;cin>>A>>B;
        cout<<"#"<<t<<' ';
        int arr[102];
         for(int i=0;i<102;i++){arr[i]=0;}
        if(A.size()==B.size()){
            for(int i=A.size()-1;i>=0;i--){
                arr[i]+=(int)A[i]+(int)B[i]-96;
                if(arr[i]>=10){
                    if(i==0){cout<<1;}
                    arr[i-1]++;
                    arr[i]-=10;
                }
            }
            for(int i=0;i<A.size();i++){
                cout<<arr[i];
            }
            cout<<'\n';
        }
        else if(A.size()>B.size()){
            int cnt=A.size()-B.size();
            for(int i=A.size()-1;i>=0;i--){
                if(i>=cnt){
                    arr[i]+=(int)A[i]+(int)B[i-cnt]-96;
                    if(arr[i]>=10){
                        arr[i-1]++;
                        arr[i]-=10;
                    }
                }
                else{
                   arr[i]+=(int)A[i]-48;
                    if(arr[i]>=10){
                        if(i==0){cout<<1;}
                        arr[i-1]++;
                        arr[i]-=10;
                    }
                }
            }
            for(int i=0;i<A.size();i++){
                cout<<arr[i];
            }
            cout<<'\n';
        }
        else{
            int cnt=B.size()-A.size();
            for(int i=B.size()-1;i>=0;i--){
                if(i>=cnt){
                    arr[i]+=(int)B[i]+(int)A[i-cnt]-96;
                    if(arr[i]>=10){
                        arr[i-1]++;
                        arr[i]-=10;
                    }
                }
                else{
                   arr[i]+=(int)B[i]-48;
                    if(arr[i]>=10){
                        if(i==0){cout<<1;}
                        arr[i-1]++;
                        arr[i]-=10;
                    }
                }
            }
            for(int i=0;i<B.size();i++){
                cout<<arr[i];
            }
            cout<<'\n';
        }
    }
    return 0;
}
