#include <iostream>
//#include <math.h>
//#include <stdlib.h>
//#include <iomanip>
#include <queue>
#include <algorithm>
//#include <utility>

using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;
    vector<int> tbl[n];
    int b[n];
    for(int i=0; i<n; i++)
    {
        b[i] = 0;
        for(int j=0; j<m; j++)
        {
            int t;
            cin >> t;
            tbl[i].insert(tbl[i].end(),t);
        }
        sort(tbl[i].begin(),tbl[i].end());
    }
    //end input
    int ans = 0;
    for(int i=0; i<m; i++)
    {
        int mx = -1;
        for(int j=0; j<n; j++)
        {
            mx = max(mx,tbl[j][i]);
        }

        int get = 0; //mean not get yet
        for(int j=0; j<n; j++)
        {
            if(get == 0 && mx==tbl[j][i])
            {
                b[j]++;
                get = 1;
                ans = max(ans,b[j]);
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        if(b[i] == ans)
        {
            cout << i+1;
            break;
        }
    }
    return 0;
}
