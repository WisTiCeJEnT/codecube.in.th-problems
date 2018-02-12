#include <iostream>
#include <vector>
using namespace std;
int n,k;
int walk(int x,int y,vector<pair<int,int> > pi,pair<int,int> di)
{
    if (x>di.first || y>di.second)
        return 0;
    int pass = true;
    for(int i;i<n;i++)
    {
        if(make_pair(x,y)==pi[i])
            pass = false; 
    }
    if(make_pair(x,y)==di)
        return 1;
    if(pass)
        return walk(x,y+1,pi,di)+walk(x+1,y,pi,di);
    else
        return 0;
}
int main()
{
    cin >> n >> k;
    vector<pair<int,int> > pi;
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin >> x >> y;
        pi.push_back(make_pair(x,y));
    }
    for(int i=0;i<k;i++)
    {
        int x,y;
        cin >> x >> y;
        cout << walk(1,2,pi,make_pair(x,y))+walk(2,1,pi,make_pair(x,y)) << endl;
    }
    return 0;
}
