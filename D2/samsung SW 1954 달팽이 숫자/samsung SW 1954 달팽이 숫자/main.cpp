#include <iostream>
using namespace std;
int T, N;
int arr[11][11];
int di_x[4] = { 1,0,-1,0 };
int di_y[4] = { 0,1,0,-1 };
 
int main(){
    cin>>T;
    for (int test = 1; test <= T; test++){
        cin>>N;
        for (int i = 0; i < N; i++){
            for (int j = 0; j < N; j++) arr[i][j] = 0;
        }
        arr[0][0] = 1;
        int x = 0, y = 0, num = 2, k = 0;
        while (1){
            if (x + di_x[k] < 0 || x + di_x[k] >= N || y + di_y[k] < 0 || y + di_y[k] >= N || arr[y + di_y[k]][x + di_x[k]] != 0) k = (k + 1) % 4;
            if (arr[y + di_y[k]][x + di_x[k]] == 0) arr[y + di_y[k]][x + di_x[k]] = num++;
            x += di_x[k];
            y += di_y[k];
            if (num > N * N) break;
        }
        printf("#%d\n",test);
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++) printf("%d ",arr[i][j]);
            printf("\n");
        }
    }
}
