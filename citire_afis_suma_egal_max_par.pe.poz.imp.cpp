#include <iostream>

using namespace std;

int n,su;

void citire (int a[100], int s, int d)
{
    if (s==d) {cout<<"introdu elem: "<<endl<<s<<": ";
                 cin>>a[s];
                }
        else {  int m=(s+d)/2;
                citire (a, s, m);
                citire (a, m+1, d);
             }
}

void afisare (int a[100], int s, int d)
{
    if (s==d) cout<<a[s]<<" ";
        else {  int m=(s+d)/2;
                afisare (a, s, m);
                afisare (a, m+1, d);
             }
}

int suma (int a[100], int s, int d)
{
    su=0;
    int m;
    if (s==d) if (a[s]%2==0 && (a[s]>9 && a[s]<100)) su=su+a[s];
                    else su=0;
        else {  m=(s+d)/2;
                su=suma(a, s, m)+suma(a, m+1, d);
             }
    return su;
}
int egale (int a[100], int s, int d)
{
    int m, e1, e2;
    if(s==d)return 1;
    else if(s+1==d)
        if(a[s]!=a[d]) return 0;
        else return 1;
    else
    {
        m=(li+ls)/2;
        s=egale(s,m);
        d=egale(m+1,d);
        return e1&& e2;
    }
}
int maxim(int a[100], int s, int d)
{
    if (s == d) return a[s];
    else
    {
        int m = (s + d) / 2;
        int max_s = maxim(a, s, m);
        int max_d = maxim(a, m + 1, d);
        if(max_s>max_d)return max_s;
        else return max_d;
    }
}
int par_impar(int a[100], int s, int d)
{

    int m, k1, k2;
    if (s == d)
    {
        if (a[s] % 2 == 0 && s % 2 != 0) return 1;
            else return 0;
    }
    else
    {
    m = (s + d) / 2;
    k1 = par_impar(a, s, m);
    k2 = par_impar(a, m + 1, d);
    return k1 + k2;
    }
}
int main()
{
    int a[100];
    cout << "n=";
    cin >> n;
    citire(a, 1, n);
    cout<<"elem vect: "<<endl;
    afisare(a, 1, n);
    cout<<endl;
    cout<<"suma elem pare de doua cifre: ";
    cout<<suma(a, 1, n)<<endl;
    if (egale(a, 1, n) == 0) cout<<"elem vect nu sunt egale."<<endl;
        else cout<<"elem vect sunt egale"<<endl;
    cout << "Max din vector este: " << maxim(a, 1, n )<<endl;
    cout << "Nr elem pare de pe poz impare este: " << par_impar(a, 1, n )<<endl;
    return 0;
}
