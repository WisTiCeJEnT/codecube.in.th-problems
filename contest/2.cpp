#include <iostream>

using namespace std;
int main()
{
    string s;
    cin >> s;
    int n;
    cin >> n;
    int len = 0;
    while(s[len]!='\0')
        len++;
    int ll[len*2+1],rr[len*2+1];
    int l=0,r=0;
    ll[0] =0;
    rr[0] =0;
    for(int i=1;i<=len;i++) 
    {
        if(s[i]=='(')
            l++;
        else
            r++;
        ll[i] = l;
        rr[i] = r;
//        cout << i << " " << l << " " << r << endl;
    }
    for(int i=1;i<len+1;i++)
    {
        ll[len+i] = ll[i];
        rr[len+i] = rr[i];
    }
    for(int i=0;i<n;i++)
    {
        cin >> l >> r;
        if((r-l)%2==0)
        {
            cout << "no" << endl;
            continue;
        }
        l--;
        if(r<l)
            r+=len;
        if(ll[r]-ll[l]==rr[r]-rr[l])
            cout << "yes" << endl;
        else
        {
            cout << "no" << endl;
//            cout << ll[r]-ll[l]<< " "<< rr[r]-rr[l] << endl;
        }
    }
    return 0;
}
