#include<bits/stdc++.h>
using namespace std;
int main(){
int cola,get,extra=0;
    while (cin>>cola){
        get = cola;
        while( cola >= 3 ){
        cola = cola-3 + extra;
        get++;
        extra = 1;
    }
    if( cola == 0 );
    else if( cola <= 2){
        get++;
    }
    cout<<get<<endl;
    get = 0;
    }
return 0;
}