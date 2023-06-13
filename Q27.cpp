// 123456789
//  1234567
//   12345
//    123
//     1
#include<iostream>
using namespace std;
int main(){
    for(int row=0;row<5;row++){
        for(int col=0;col<row;col++){
            cout<<" ";
        }
        for(int col=0;col<2*(5-row)-1;col++){
            cout<<(col+1);
        }
        cout<<endl;
    }
    
    return 0;
}