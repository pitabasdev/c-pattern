//      *
//     **
//    * *
//   *  *
//  *****
#include<iostream>
using namespace std;
int main(){
    for(int row=0;row<6;row++){
     for(int col=0;col<6-row;col++){
        cout<<" ";
     }
    for(int col=1;col<=row;col++){
        if(col==1 || col == row || row==5){
            cout<<"*";
        }
        else{
            cout<<" ";
        }
     }
        cout<<endl;
    }

}