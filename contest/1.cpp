#include <iostream>
using namespace std;
int main()
{
    int n,k;
    cin >> n >> k;
    bool ss = true;
    int kk = k;
    int mm=0,ff=0;
    int m[n],f[n];
    for(int i=0;i<n;i++)
    {
        cin >> m[i] >> f[i];
    }
    for(int i=0;i<n;i++)
    {
        if(ss != true)        
            break;
        mm += m[i];
        ff += f[i];
        if(mm==ff)
        {
            mm = 0;
            ff = 0;
            kk = k;
        }
        else if(kk>0)
        {
            kk--;
        }
        else
            ss = false;
    }
    if(ss)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}