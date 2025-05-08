#include <iostream>

using namespace std;
int A[100001];
long long S[1000001];
int main()
{
    int n,m,p,u;
    long long max=0;
    cin>>n;
    for(int i=1;i<=n;i++)
        {
            cin>>A[i];
            S[i]=S[i-1]+A[i];
        }
    cin>>m;
    for(int l=1;l<=m;l++)
    {
        long long s=0;
        cin>>p>>u;
        if(p>u)
        {
            int aux=p;
            p=u;
            u=aux;
        }
        s=S[u]-S[p-1];
        if(s>max) max=s;
    }
    cout<<max;
    return 0;
}
