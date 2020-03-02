//c++ style 5ms
 #include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int T;
    cin>>T;
    
    for(int t=1;t<=T;t++){
        string *arr=new string[10];
        int *result=new int[10];
        int max=1,min=55;
        for(int i=0;i<10;i++){cin>>arr[i];}
        for(int i=0;i<10;i++){
            int temp=0;
            for(int j=0;j<arr[i].size();j++){
                temp+=arr[i][j]-48;
            }
            if(min>temp){min=temp;}
            if(max<temp){max=temp;}
        }
        cout<<"#"<<t<<' '<<max<<' '<<min<<'\n';
        delete [] result;
        delete [] arr;
    }
    return 0;
}
