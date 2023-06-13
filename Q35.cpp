// 1
// 121
// 12321
// 1234321
// 123454321
// 12345654321
#include<iostream>
using namespace std;
int main(){
    for(int row=0;row<6;row++){
        for(int col=0;col<row+1;col++){
            cout<<col+1;
        }
        for(int col=row;col>=1;col--){
            cout<<col;
        }
        cout<<endl;
    }
}