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
    int sum[n*2];
    for(int i=0;i<n;i++)
    {
        cin >> atk[i];
    }
    for(int i=0;i<n;i++)
    {
        cin >> def[i];
    }
    int j = n/2+1;
    sum[0] = def[j];
    for(int i=1;i<n*2;i++)
    {
        j++;
        if(j>=n)
            j-=n;
        sum[i] = sum[i-1]+def[j];
        //cout << j << " " << sum[i] << endl;
    }
    /*
    while(true)
    {
        int a,b;
        cin >> a >> b;
        cout << sum[(n/2)+b]-sum[(n/2)+a] << endl;
    }*/
    //==================
    int max = (n-1)/2;
    for(int i=0;i<n;i++)
    {
        //cout << "on " << i << endl;
        int tmpAns = max/2;
        int mn = 0;
        int mx = max;
        while(mx-mn>0)
        {
            int t1 = sum[(n/2)+i+tmpAns]; 
            int t2 = sum[(n/2)+i-tmpAns-1]+def[i]; 
            //cout << t1 << " " << t2 << " " << t1-t2 << endl; 
            //cout << i << " try " <<tmpAns<< mn << " " << mx << endl;
            if(t1-t2 <= atk[i])
            {
                mn = tmpAns;
                tmpAns = (mx+mn+1)/2;
            }
            else
            {
                //cout << "else";
                mx = tmpAns-1;
                tmpAns = (mx+mx)/2;
            }
        }
        ans[i] = mn*2;
    }
    for(int i=0;i<n;i++)
        cout << ans[i] << " ";
    return 0;
}