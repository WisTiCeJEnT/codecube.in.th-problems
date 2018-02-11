#include <iostream>
using namespace std;
int main()
{
    int n,k;
    cin >> n >> k;
    int lis[n];
    for(int i=0;i<n;i++)
    {
        string s;
        cin >> s;
        if(s=="UR")
            lis[i] = 1;
        else
            lis[i] = 0;
    }
    int mx = 0;
    int sum = 0;
    int e = k;
    for(int i=0;i<n;i++)
    {
        if(e>0)
        {
            sum += lis[i];
            e--;
        }
        else
        {
            sum += lis[i];
            sum -= lis[i-k];
        }
        mx = max(mx,sum);
    }
    cout << mx << endl;
    return 0;
}