#include <iostream>

using namespace std;
int v[100],n;

int cmmdc(int a,int b)
{
    if(b==0)return a;
    else return cmmdc(b,a%b);
}

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
        z=cmmdc(x1,x2);
    }
}

int main()
{
    int i,z;
    cout<<"n= ";cin>>n;
    for(i=1;i<=n;i++){cout<<"v["<<i<<"]=";cin>>v[i];}
    dei(1,n,z);
    cout<<"cmmdc= "<<z;
    return 0;
}
