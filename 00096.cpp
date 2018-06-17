#include <iostream>
using namespace std;
int n;
int ind(int x)
{
    if(x<0)
        x+=n;
    else if(x>=n)
        x-=n;
    return x;
}
int main()
{
    cin >> n;
    int atk[n];
    int def[n];
    int ans[n];
    for(int i=0;i<n;i++)
    {
        cin >> atk[i];
    }
    for(int i=0;i<n;i++)
    {
        cin >> def[i];
    }
    for(int i=0;i<n;i++)
    {
        ans[i] = 0;
        int l = ind(i-1);
        int r = ind(i+1);
        int ll = i;
        while(l!=r and ll!=r)
        {
            atk[i]-=(def[ind(l)] + def[ind(r)]);
            if(atk[i]>=0)
            {
                ans[i]+=2;
                l--;
                r++;
                ll--;
            }
            else
                break;
        }
    }
    for(int i=0;i<n;i++)
        cout << ans[i] << " ";
    return 0;
}
