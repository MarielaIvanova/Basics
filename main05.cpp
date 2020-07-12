#include <iostream>

using namespace std;

int main()
{
    int n;
    int sum=1;
    cout<<"n= ";
    cin>>n;
    for(int i=2019; sum%n!=0; i++)

    {
        int chislo= i;
        int cifra;
        sum=0;
        while(chislo!=0)
        {
            cifra=chislo%10;
            sum=sum+cifra;
            chislo=chislo/10;
        }
        if(sum%n==0)cout<<i<<endl;
    }
    return 0;
}
