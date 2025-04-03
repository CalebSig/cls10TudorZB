#include <iostream>

///problema SecvZero id #518

using namespace std;
int n, A[1005], lmax,st,dr,l;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>A[i];
    l=0; ///lungimea secventei curente -> 0 (in acest caz) inainte de parcurgerea vectorului
    for(int i=1;i<=n;i++)
        if(A[i]==0)
        {
            l++;
            if (l > lmax) ///detectia sirului maxim
            {
                lmax=l;
                st=i-l+1;
                dr=i;
            }
        }
        else
            l=0;
    cout<<st<<" "<<dr;
    return 0;
}
