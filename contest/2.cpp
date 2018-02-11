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
/*        if (l>r)
        {
            int t = l;
            l=r;
            r=t;
        }
*/
        int a=0;
        int b=0;
        if(r<l)
            r+=len;
        for(int j=0;j<=r-l;j++)
        {
            if(s[(j+l)%len]=='(')
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
