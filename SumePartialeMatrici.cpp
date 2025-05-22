///problema #2902 pbinfo

#include <iostream>

using namespace std;
int S[1001][1001],n,m,k;
int main()
{
    cin>>n>>m>>k;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
        {
            cin>>S[i][j];
            S[i][j]+=S[i-1][j]+S[i][j-1]-S[i-1][j-1]; ///Calcul recursiv al sumei partiale
        }

    /*for(int i=1;i<=n;i++,cout<<endl)
        for(int j=1;j<=m;j++)
                cout<<S[i][j]<<" ";*/

    for(int q=1;q<=k;q++)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;

        int nrElemente,sum;

        int lmax=max(a,c);
        int lmin=min(a,c);
        int cmax=max(b,d);
        int cmin=min(b,d);

        nrElemente=(lmax-lmin+1)*(cmax-cmin+1);
        sum=S[lmax][cmax]-S[lmin-1][cmax]-S[lmax][cmin-1]+S[lmin-1][cmin-1]; ///suma unui dreptunghi cu colturile lmin,cmin, lmax, cmax

        //cout<<nrElemente<<" "<<sum<<endl;

        if(sum == 0) cout<<0<<'\n';
        else if(sum == nrElemente) cout<<1<<'\n';
        else cout<<2<<'\n';
    }

    return 0;
}
