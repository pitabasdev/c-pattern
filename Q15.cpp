// 1
// 23
// 456
// 78910
#include<iostream>
using namespace std;
int main(){
    int num=1;
    for(int row=0;row<4;row++){
        for(int col=0;col<row+1;col++){
            cout<<num;
            num++;
        }
        
        cout<<endl;
    }
}