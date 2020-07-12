#include <iostream>
#include<cmath>

using namespace std;

int main()
{
    int a,b;
    cout<<"a= ";
    cin>>a;
    cout<<"b= ";
    cin>>b;
    int  chislo,chislo1,brcifri=0,cifra,novacifra,novochislo=0;
    for(int i=a; i<=b;i++)
    {
        chislo=i;
        chislo1=i;
        while(chislo1!=0)
        {
            brcifri++;
            chislo1=chislo1/10;
        }
        while(chislo!=0)
        {
            cifra=chislo/(int)(pow(10,brcifri));
            novacifra=(int)(pow(cifra,brcifri));
            novochislo=novochislo+novacifra;
            chislo=chislo%((int)(pow(10,brcifri)));
            brcifri--;
        }
        if(novochislo==i)cout<<novochislo<<endl;
    }

    return 0;
}
