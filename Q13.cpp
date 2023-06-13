// A
// BC
// DEF
// GHIJ
// KLMNO
#include<iostream>
using namespace std;
int main(){
    char ch='A';
    for(int row=0;row<5;row++){
        for(int col=0;col<row+1;col++){
            cout<<ch;
            ch++;
        }
        cout<<endl;
    }
}