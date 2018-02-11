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
        if(m[i]>f[i])
        {
            for(int j=1;j<=k;j++)
            {
                if(f[i+j]>=m[i]-f[i])
                {
                    f[i+j] -= m[i]-f[i];
                    f[i] = m[i];
                    break;
                }
                else
                {
                    f[i] += f[i+j];
                    f[i+j] = 0;
                }
            }
        }
        else if(m[i]<f[i])
        {
            for(int j=1;j<=k;j++)
            {
                if(m[i+j]>=f[i]-m[i])
                {
                    m[i+j] -= f[i]-m[i];
                    m[i] = f[i];
                    break;
                }
                else
                {
                    m[i] += m[i+j];
                    m[i+j] = 0;
                }
            }
        }
        if(m[i]!=f[i])
        {
            ss = false;
        }
    }
    if(ss)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}