#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int T;
    cin>>T;
    for(int t=1;t<=T;t++){
        int arr[5]={0,};
        int sum=0;
        for(int i=0;i<5;i++){
            cin>>arr[i];
            if(arr[i]<40){arr[i]=40;sum+=40;}
            else{sum+=arr[i];}
        }
        cout<<"#"<<t<<' '<<sum/5<<'\n';
    }
    return 0;
}
