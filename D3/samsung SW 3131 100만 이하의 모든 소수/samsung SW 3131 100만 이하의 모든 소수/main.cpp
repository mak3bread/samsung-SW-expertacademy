#include <iostream>
using namespace std;
int main(){
    bool arr[1000001];
    for(int i=0;i<=1000000;i++){arr[i]=true;}
    for(int i=2;i<=1000000;i++){
        if(arr[i]){
            for(int j=i*2;j<=1000000;j+=i){arr[j]=false;}
        }
    }
    for(int i=2;i<=1000000;i++){
        if(arr[i]){printf("%d ",i);}
    }
    return 0;
}
