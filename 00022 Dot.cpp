#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<pair<int,int> > vii(n);
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin >> a >> b;
        vii[i] = make_pair(a,b);
    }
    sort(vii.begin(),vii.end());

    pair<int,int> pii = vii[0];
    int c = 1;
    for(int i=1;i<n;i++)
    {
        if(pii!=vii[i])
            c++;
        pii = vii[i];
    }
    cout << c << endl;
	return 0;
}
