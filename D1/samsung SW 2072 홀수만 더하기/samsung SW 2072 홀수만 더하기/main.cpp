
#include<iostream>
using namespace std;

int main(int argc, char** argv)
{
    int test_case;
    int T;

    cin>>T;
  
    for(test_case = 1; test_case <= T; ++test_case)
    {
int num=0;
   for(int i=0;i<10;i++){
       int a;
       cin>>a;
       if(a%2==1){
       num+=a;
       }
   }
        
cout<<"#"<<test_case<<" "<<num<<'\n';

    }
    return 0;
}
