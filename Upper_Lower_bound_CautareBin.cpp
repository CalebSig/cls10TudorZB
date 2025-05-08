#include <iostream>

using namespace std;
int n,A[100001],y,e,s;
int M[100001];
int main()
{

    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>A[i];
        M[i]=max(M[i-1],A[i]);
        A[i]+=A[i-1];
    }

    for(int i=1;i<=n;i++) cout<<M[i]<<" ";

    cin>>y;
    for(int i=1;i<=y;i++)
    {
        cin>>e>>s;
        int st=1,dr=n;
        bool ok=0;
        while(st<=dr) //Upper bound -> cea mai din dreapta pozitie posibila in vectorul sortat
          //pozitia celui mai mic element mai mare STRICT decat elementul cautat!
        {
            int mij=(st+dr)/2;
            if(A[mij]<=s) st=mij+1;
            else dr=mij-1;
        }
      //raspunsul la U.B. se afla la st sau dr + 1 
        int stNou=1,drNou=dr;
        while(stNou<=drNou)
        {
            int mij=(stNou+drNou)/2;
            if(M[mij]<=e) stNou=mij+1;
            else drNou=mij-1;
        }
        cout<<drNou<<'\n';

    }

/*

  lower bound!

    while(st<=dr)
        {
            int mij=(st+dr)/2;
            if(A[mij]>=s) dr=mij-1;
            else st=mij+1;
        }

  raspunsul se afla la dr sau st-1
      
  */

  
    return 0;
}
