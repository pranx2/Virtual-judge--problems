#include<bits/stdc++.h>
using namespace std;
int main(){
int n,count = 0, count_arr = count;
string s;
cin>>n;
for (int i =0 ; i < n; i++)
{
    // for (int j = 0; j != '/0'; j++)
    // {
    //     cin>>arr[j];
    //     count++;
    // }
    // if(count >= 10){
    //     cout<<arr[i]<<count-2<<arr[count_arr]<<endl;
    // }
    // else count<<
    // count = 0;
    for (int i = 0; i < n; i++)
    {
        cin>>s;
        int length = s.size();
        if(length >= 10){
            cout<<s.at(i)<<(length-2)<<s.at(length)<<endl;
        }
        else cout<<s;
    }
    
}G

return 0;
}