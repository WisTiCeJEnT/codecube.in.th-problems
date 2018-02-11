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
    s = s + s;
    for(int i=0;i<n;i++)
    {
        int l,r;
        cin >> l >> r;
        if((r-l)%2==0)
        {
            cout << "no" << endl;
            continue;
        }
        l--;
        r--;
        int a=0;
        int b=0;
        if(r<l)
            r+=len;
        for(int j=l;j<=r;j++)
        {
            if(s[j]=='(')
                a++;
            else
                b++;
        }
        if(a==b)
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
    return 0;
}
