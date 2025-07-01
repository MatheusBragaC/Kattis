#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();
    
    for(int k = 0; k < n; k++)
    {
        string a;
        getline(cin, a);
        
        if (a == "P=NP")
        {
            cout << "skipped" << endl;
        }
        else
        {
            stringstream testcase(a);
            int b;
            char c;
            int d;
            testcase >> b >> c >> d;
            cout << b + d << endl;
        }
        
        
    }
    
    
    
    return 0;
}
