#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int N;
    cin>>N;
    
    for(int i=1;i<=N;i++){
        if(i<=10){
            if(i%3==0){
                cout<<"- ";
            }
            else{cout<<i<<' ';}
        }
        else if(i<=100){
            int cnt=0;
            int num1=i%10;
            int num2=i/10;
            if(num1%3==0&&num1!=0){cnt++;}
            if(num2%3==0){cnt++;}
            if(cnt==0){cout<<i<<' ';}
            else{
                for(int j=0;j<cnt;j++){
                    cout<<"-";
                }
                cout<<' ';
            }
        }
        else{
            int cnt=0;
            int num1=i%10;
            int num2=(i%100)-num1;
            int num3=i/100;
            if(num1%3==0&&num1!=0){cnt++;}
            if(num2%3==0&&num2!=0){cnt++;}
            if(num3%3==0){cnt++;}
            if(cnt==0){cout<<i<<' ';}
            else{
                for(int j=0;j<cnt;j++){
                    cout<<"-";
                }
                cout<<' ';
            }
        }
    }
    cout<<'\n';
    return 0;
}
