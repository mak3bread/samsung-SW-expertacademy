#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int T;
    cin>>T;
    
    for(int i=1;i<=T;i++){
        int arr[10];
        int min=10000;
        int max=0;
        int sum=0;
        
        for(int j=0;j<10;j++){
            cin>>arr[j];
            
            if(arr[j]<min){min=arr[j];}
            if(arr[j]>max){max=arr[j];}
            sum+=arr[j];
        }
        float avg=(float)(sum-min-max)/8.0;
        int result=floor(avg+0.5);
        cout<<"#"<<i<<' '<<result<<'\n';
    }
    
    return 0;
}
