#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int cola, get, brow=0,mod,i;
    while(scanf("%d",&cola)==1)
    {
        get=cola;
            while(cola>=3)
            {
                cola=cola-2;
                get+=1;
            }
        if(cola==2)
            get+=1;
        printf("%d\n",get);
    }
    return 0;
}