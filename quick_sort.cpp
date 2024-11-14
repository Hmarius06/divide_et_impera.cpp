#include <iostream>

using namespace std;
int v[100],n;

void schimb(int &x,int &z)
{
    int aux=x; x=z; z=aux;
}

void poz(int li, int ls, int &k)
{
    int i,j;
    i=li;
    j=ls;
    k=0;
    while(i<j)
    {
        if(v[i]>v[j])
        {
            schimb(v[i],v[j]);
            k++;
        }
        if(k%2)i++;
        else j--;
    }
    k=i;
}

void sort(int li, int ls)
{
    int k;
    if(li<ls)
    {
        poz(li,ls,k);
        sort(li,k-1);
        sort(k+1,ls);
    }
}

void afis(int v[100])
{
    cout<<"vect este:";
    for(int i=1;i<=n;i++)
    cout<<v[i]<<" ";
    cout<<endl;
}

int main()
{
    cout<<"n= ";cin>>n;
    for(int i=1;i<=n;i++){cout<<"v["<<i<<"]=";cin>>v[i];}
    afis(v);
    sort(1,n);
    afis(v);
    return 0;
}
