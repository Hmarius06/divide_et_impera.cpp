#include <iostream>

using namespace std;
int v[100],n;
void dei(int s,int d,int &z)
{
    int m,x1,x2;
    if(d==s)
        z=v[s];
    else
    {
        m=(s+d)/2;
        dei(s,m,x1);
        dei(m+1,d,x2);
        z=x1+x2;
    }
}

int main()
{
    int i,z;
    cout<<"n= ";cin>>n;
    for(i=1;i<=n;i++){cout<<"v["<<i<<"]=";cin>>v[i];}
    dei(1,n,z);
    cout<<"suma= "<<z;
    return 0;
}
