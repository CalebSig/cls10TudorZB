#include <iostream>

using namespace std;

#define MAX 1e6
bool E[1000001];
int n,x,c;
int P[100000],np;
const int NMAX = 1e6;

int main()
{

    for(int i=2;i*i<=NMAX;++i)
        if(!E[i])
            for(int j=i*i;j<=NMAX;j+=i)
                E[j]=1;

    for(int i=2;i<=NMAX;++i) if(!E[i]) P[++np] = i;

    int n;
    cin>>n;

   /* int d=2; ///FARA CIUR
    while(n>1)
    {
        if(n%d==0)
        {
            int e=0;
            while(n%d == 0) e++,n=n/d;
            cout<<d<<" "<<e<<endl;
        }
        d++;
        if(d*d>n) d=n;
    }*/


  ///CU CIUR
    int d=1;
    while(n>1)
    {
        if(n%P[d]==0)
        {
            int e=0;
            while(n%P[d] == 0) e++,n=n/P[d];
            cout<<P[d]<<" "<<e<<endl;
        }
        d++;
        if(P[d]*P[d]>n)
        {
            if(n>1) cout<<n<<" "<<1;
            break;
        }
    }
    return 0;
}
