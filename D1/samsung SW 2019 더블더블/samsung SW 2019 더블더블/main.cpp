
#include <iostream>
using namespace std;

int main() {
    int a;
    cin>>a;
    int result=1;
    for(int i=0;i<=a;i++){
        cout<<result<<' ';
        result*=2;
    }
    cout<<'\n';
    return 0;
}
