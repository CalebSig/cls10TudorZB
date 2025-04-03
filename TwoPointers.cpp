#include <iostream>
#include <fstream>

///problema SumaInSecv id #300

using namespace std;

ifstream f("sumainsecv.in");
ofstream g("sumainsecv.out");

int main()
{
    int n,i;
    long long v[101], Suma, s;
    f>>n>>Suma;
    for(i = 1; i <= n; i++)
        f>>v[i];
    int j = 1;
    s = 0;
    for(i = 1; i <= n; i++)
    {
        s += v[i];
        if(s > Suma)
        {
            while(s > Suma)
            {
                s -= v[j];
                j++;
            }
        }
        if(s == Suma) break;
    }
    if(i <= n) g<<j<<' '<<i;
    else g<<0<<' '<<0;
}
