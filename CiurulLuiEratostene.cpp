#include <fstream>
#include <bitset>
using namespace std;

ifstream cin("eratostene.in");
ofstream cout("eratostene.out");

bitset <1000001>E; ///pentru numere mari facem invers! 0 pentru prim, 1 pentru neprim

int nmax=1000000; ///val maxima din ciur
int main()
{
    for(int i=2;i*i<=nmax;i++)
        if(!E[i])
            for(int j=i*i;j<=nmax;j=j+i)  ///pentru fiecare numar prim gasit, marcam toti multiplii lui ca fiind neprimi
                E[j]=1;
    int cnt=0,n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        if(E[x]==0) cnt++;
    }
    cout<<cnt;
    return 0;
}
