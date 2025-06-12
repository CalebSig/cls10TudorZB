/// ID #297 pbinfo

#include <fstream>
using namespace std;
ifstream fin("secvsummax.in");
ofstream fout("secvsummax.out");
int st,dr,x,smax,n,start=1,s;
int main()
{
    fin>>n;
    for(int i=1;i<=n;i++)
    {
        fin>>x;
        if(s<0) {s=0; start=i;}
        s=s+x;
        if(smax<s) {smax=s; st=start; dr=i; }
    }
    fout<<st<<" "<<dr;
    return 0;
}
