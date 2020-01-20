#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int T;
    cin>>T;
    
    for(int i=0;i<T;i++){
        int N;
        cin>>N;
        
        int* price=new int[N];
        
        long long result=0;
        int max=0;
        
        for(int j=0;j<N;j++){
            int a;
            cin>>a;
            if(max<a){
                max=a;
            }
            price[j]=a;
        }
        
        for(int j=0;j<N;j++){
            if(price[j]==max){
                max=0;
                for(int k=N-1;k>j;k--){
                    if(max<price[k]){max=price[k];}
                }
            }
            else{
                result+=max-price[j];
            }
        }
        
        cout<<"#"<<i+1<<' '<<result<<'\n';
       
        delete[] price;
    }
    return 0;
}
