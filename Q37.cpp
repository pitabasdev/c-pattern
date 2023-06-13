// *
// **
// * *
// *  *
// *****


#include<iostream>
using namespace std;

int main(){
    for(int row=0;row<=5;row++){
        for(int col=1;col<=row;col++){
            if(col==1 || col==row || row==5){
                cout<<"*";
            }
            else{
                cout<<" ";
            }

        }
        
      
        cout<<endl;
    }
}