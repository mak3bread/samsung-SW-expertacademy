#include <iostream>
#include <cctype>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int T;cin>>T;
    for(int t=1;t<=T;t++){
        string a,b,c;
        cin>>a>>b>>c;
        transform(a.begin(), a.begin()+1, a.begin(), ::toupper);
        transform(b.begin(), b.begin()+1, b.begin(), ::toupper);
        transform(c.begin(), c.begin()+1, c.begin(), ::toupper);
        cout<<"#"<<t<<' '<<a[0]<<b[0]<<c[0]<<'\n';
    }
    return 0;
}
