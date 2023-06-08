#include<iostream>
using namespace std;
int main(){
    for(int row=0;row<6;row++){
        for(int col=0;col<6;col++){
            if(row==0 || row==5 || col==0 || col==5){
                cout<<"*";
            }
            else{
                cout<<"O";
            }
        }
        cout<<endl;
    }
}