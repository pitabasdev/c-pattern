
// *******
// *   *
// *  *
// * *
// **
// *
#include<iostream>
using namespace std;

int main(){
    for(int row=6;row>=1;row--){
        for(int col=0;col<=row;col++){
            if(col==1 || col==row || row==6){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}