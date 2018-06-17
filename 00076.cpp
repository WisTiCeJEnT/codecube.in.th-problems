#include <iostream>
using namespace std;
int main()
{
    int lis[3];
    for(int i=0;i<1;i++)
    {
        string s;
        getline(cin,s);
        lis[0] = 0;
        lis[1] = 0;
        lis[2] = 0;
        int j = 0;
        int k = 0;
        while(s[j]!='\0')
        {
            if(s[j]=='.')
            {
                j++;
                continue;
            }
            else if(s[j]==' ')
            {
                j++;
                k++;
                continue;
            }
            lis[k] *= 10;
            lis[k] += ((int)s[j] - (int)'0');
            j++;
        }
        if(lis[0]+lis[1]==lis[2])
            cout<<"Correct"<<endl;
        else
            cout << "Wrong" << endl;
    }
}
