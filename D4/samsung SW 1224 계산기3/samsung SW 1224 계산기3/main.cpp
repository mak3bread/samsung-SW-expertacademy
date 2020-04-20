#include <iostream>
#include <stdio.h>
#include <stack>
using namespace std;
int main(){
    stack<char> op;
    stack<int> num;
    for(int t=1;t<=10;t++){
        int N;scanf("%d",&N);
        for(int i=0;i<N;i++){
            char input;scanf("%1c",&input);
            if((input>='0')&&(input<='9')){
                num.push(input-'0');
                if(!op.empty()&&op.top()=='*'){
                    if(num.size()>=2){
                        int num1=num.top();num.pop();
                        int num2=num.top();num.pop();
                        num.push(num1*num2);op.pop();
                    }
                }
            }
            else if(input==')'){
                while(op.size()>0&&op.top()!='('){
                    if(num.size()>=2){
                        int num1=num.top();num.pop();
                        int num2=num.top();num.pop();
                        num.push(num1+num2);op.pop();
                    }
                }
                op.pop();
                if(!op.empty()&&op.top()=='*'){
                if(num.size()>=2){
                    int num1=num.top();num.pop();
                    int num2=num.top();num.pop();
                    num.push(num1*num2);op.pop();
                }
            }
            }
                else{op.push(input);}
        }
        int result=0;
            while(!num.empty()){
                result+=num.top();num.pop();
            }
            while(!op.empty()){op.pop();}
            printf("#%d %d\n",t,result);
    }
    return 0;
}
