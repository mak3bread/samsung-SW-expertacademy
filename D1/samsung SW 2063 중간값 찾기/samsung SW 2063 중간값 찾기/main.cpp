#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
    int N;
    cin>>N;
   
    int* arr =new int[N];
for(int i=0;i<N;i++){
    int a;
    cin>>a;
    arr[i]=a;
}
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(arr[i]>arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
        
    }
    
    cout<<arr[N/2]<<'\n';
    return 0;
}
