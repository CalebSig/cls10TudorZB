// id: #1512

#include <iostream>

using namespace std;
int M[2000002];
int main()
{
    int n,m,st,dr,X;
    cin>>n>>m;
    for(int i=1;i<=m;i++)
    {
        cin>>st>>dr>>X;
        M[st]=M[st]+X;
        M[dr+1]=M[dr+1]-X;
    }
    for(int i=1;i<=n;i++)
        M[i]=M[i]+M[i-1];
    for(int i=1;i<=n;i++)
        cout<<M[i]<<" ";
    return 0;
}
