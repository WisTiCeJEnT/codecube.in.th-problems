#include <iostream>
//#include <math.h>
//#include <stdlib.h>
//#include <iomanip>
#include <queue>
#include <vector>


using namespace std;
int n,m;
vector<pair<int,int> > A;
vector<int> B;
vector<int> D;
void drop(int me)
{
    priority_queue<pair<int,int> ,vector<pair<int,int> > ,greater<pair<int,int> > > pii;
    for(int i=0;i<n;i++)
    {
        if(A[i].first==me+1&&B[i]==0)
        {
            pii.push(make_pair(A[i].second,i));
        }
    }
    while(!pii.empty())
    {
        drop(pii.top().second);
        pii.pop();
    }
    if(me!=-1)
    {
        D.push_back(me+1);
        B[me] = 1;
    }

}
int fmax(int s)
{
    int rx = s+1;
    for(int i=0;i<n;i++)
    {
        if(A[i].first==s+1)
            rx = max(rx,fmax(i));
    }
    if(s!=-1)
        A[s].second = rx;
    return rx;
}

int main()
{
    int t;
	cin >> n >> m;
	for(int i=0;i<n;i++)
    {
        cin >> t;
        A.push_back(make_pair(t,-1));
        B.push_back(0);
    }
    fmax(-1);
    drop(-1);
    int E[n];
    E[0] = D[0];
    for(int i=1;i<n;i++)
        E[i] = E[i-1]+D[i];
    vector<int> ans;
    int point = 0;
    for(int i=0;i<m;i++)
    {
        cin >> t;
        if(t==1)
        {
            cin >> t;
            point = point + t;
            //cout << D[point-1] << endl;
            ans.push_back(D[point-1]);
        }
        else if(t==2)
        {
            cin >> t;
            point = point - t;
        }
        else
        {
            ans.push_back(E[point-1]);
        }
    }
    while(!ans.empty())
    {
        cout << ans.front() << endl;
        ans.erase(ans.begin());
    }
    /*for(int i=0;i<n;i++)
    {
        cout << D[i] << " ";
    }*/
	return 0;
}
