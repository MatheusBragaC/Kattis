#include <bits/stdc++.h>

using namespace std;

int main()
{
    string input;
    getline(cin, input); 

    stringstream ss(input);
    string month;
    int day;
    ss >> month >> day;

    if ((month == "OCT" && day == 31) || (month == "DEC" && day == 25)) {
        cout << "yup" << endl;
    } else {
        cout << "nope" << endl;
    }

    
    

    
    return 0;
}