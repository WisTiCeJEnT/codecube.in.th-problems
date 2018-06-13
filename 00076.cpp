#include <iostream>
using namespace std;
int main()
{
    float x,y,z;
    long a,b,c;
    for(int i=0;i<1000;i++)
    {
//        cin >> x >> y >> z;
        a = 10000000000*x;
        b = 10000000000*y;
        c = 10000000000*z;
        cout << a+c << endl;
        if(a+b==c)
            cout<<"Correct"<<endl;
        else
            cout << "Wrong" << endl;
    }
}
