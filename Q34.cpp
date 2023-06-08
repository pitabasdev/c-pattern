#include<iostream>
using namespace std;
int main(){
    for(int row=0;row<6;row++){
        for(int col=1;col<6;col++){
           if(row==col || row+col==5+1){
            cout<<"* ";
           }
           else{
            cout<<" ";
           }
        }
        cout<<endl;
    }
}