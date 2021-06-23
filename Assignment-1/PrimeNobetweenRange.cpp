//PRINT ALL PRIME NO BETWEEN RANGE

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,i,j,start=0;
    cout<<"low:";
    cin>>x;
    cout<<"High:";
    cin>>y;
    for(i=x; i<=y; i++)
    {
        for(j=2; j<i; j++)
        {
           if(i%j==0)
           {
               start++;
               break;
           }
        }
        if(start==0 && i!=1)
            cout<<i<<endl;
        start = 0;
    }
    cout<<endl;
    return 0;
}
