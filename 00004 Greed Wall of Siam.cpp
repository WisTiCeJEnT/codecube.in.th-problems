#include <iostream>

using namespace std;


int main()
{
    int tm;//for temp while find GCD
    int n;
    cin >> n;
    int g;//GCD
    unsigned long s;
    cin >> g;
    s = g;
    unsigned long t;
    for(int i=1;i<n;i++)
    {
        cin >> t;
        s = s + t;
        while(t%g!=0)
        {
            tm = t;
            t = g;
            g = tm%g;
        }
    }
    cout << s/g << endl;
    return 0;
}
