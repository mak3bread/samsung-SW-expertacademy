#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
    int test_case;
    int T;
    cin>>T;

    for(test_case = 1; test_case <= T; ++test_case)
    {

        float sum=0;
        int sumi=0;
        for(int i=0;i<10;i++){
        float a;
            
            cin>>a;
            sum+=a;
            sumi+=a;
        }
        int avg=0;
        if((sum/10-sumi/10)>=0.5){
        avg=sumi/10+1;
        }
        else{avg=sumi/10;}
        cout<<"#"<<test_case<<" "<<avg<<'\n';


    }
    return 0;
}
