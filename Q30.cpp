#include<iostream>
using namespace std;
int main(){
    int mid=5/2;
    for(int row=0;row<5;row++){
        for(int col=0;col<5;col++){
            
            if(row==mid || col==mid){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
            
        }
        cout<<endl;
    }
}