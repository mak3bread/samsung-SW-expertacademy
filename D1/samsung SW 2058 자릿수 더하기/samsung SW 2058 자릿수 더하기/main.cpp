#include <iostream>
using namespace std;
int main(){
    string N;
    cin>>N;
    if(N.size()==1){
        cout<<N<<'\n';
    }
    else if(N.size()==2){
        cout<<N[0]+N[1]-96<<'\n';
    }
    else if(N.size()==3){
        cout<<N[0]+N[1]+N[2]-144<<'\n';
    }
    else{
        cout<<N[0]+N[1]+N[2]+N[3]-192<<'\n';
    }
return 0;
}
