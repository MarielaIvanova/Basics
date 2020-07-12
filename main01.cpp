#include <iostream>

using namespace std;

int main()
{
    double x, res;
    cout<<"Vavedete stoinost za x: ";
    cin>>x;
    res=(11*x*x+3*x+15)/(x*x*x-25);
    cout<<res<<endl;
    return 0;
}
