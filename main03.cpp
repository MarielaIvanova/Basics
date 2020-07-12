#include <iostream>
#include<cmath>

using namespace std;

int main()
{
    int x,brcifri,cifra,novochislo=0;
    cin>>x;
    brcifri=(int)(log10(x));
    while(x>0)
    {
        cifra=x/pow(10,brcifri);
        if(cifra%3==0)cifra=cifra/3;
        else if(cifra%2==0)cifra=cifra+1;
        else cifra=cifra+2;
        novochislo=novochislo+cifra*pow(10,brcifri);
        x=x%(int)(floor(pow(10,brcifri)));
        brcifri--;
    }
    cout<<novochislo*2<<endl;

    return 0;
}
