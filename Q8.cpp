// 11111
//  2222
//   333
//    44
//     5
#include<iostream>
using namespace std;
int main(){
    for(int row=0;row<5;row++){
        for(int col=0;col<row;col++){
            cout<<" ";
        }
        for(int col=0;col<5-row;col++){
            cout<<row+1;
        }
        cout<<endl;
    }
}