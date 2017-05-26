#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    string A,B;
    cin >> A >> B;
    int i = 0;
    while(A[i]!='\0')
    {
        if((int)A[i]>90)
            A[i] = A[i]-32;
        if((int)B[i]>90)
            B[i] = B[i]-32;
        
        
        
        int t = (int)B[i] - (int)A[i];
        if(t<0&&t>=-25&&t<=-17)
            A[i] = t+26+48;
        else if((t<=9 && t>=0))
            A[i] = t+48;
        else
        {
            //cout << (int)B[i]-(int)A[i] << endl;
            cout << "R.I.P." << endl;
            break;
        }
        
        //cout << (int)A[i] << i << endl;
        i++;
        if(A[i]=='\0')
            cout << A << endl;
    }
}
