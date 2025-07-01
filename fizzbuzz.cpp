#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, q;
    
    cin >> n >> m >> q;
    
    for (int k = 1 ; k < q + 1; k++)
    {
        if ((k % n) == 0 && (k % m) == 0)
        {
            cout << "FizzBuzz" << endl;
        }
        
        else if ((k % n) == 0)
        {
            cout << "Fizz" << endl;
        }
        else if((k % m) == 0)
        {
            cout << "Buzz" << endl;
        }
        else
        {
            cout << k << endl;
        }
        
    }

    return 0;
}
