//PATERN LIKE STAR
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, j, rows, d;
    cout << "\n\n Display the pattern like star:\n";
    cout << " Input number of rows: ";
    cin >> rows;
    for (i = 1; i <= rows; i++) 
    {
        for (j = 1; j <= rows - i; j++) 
        {
            cout << " ";
        }
        
        for (j = 1; j <= i; j++) 
        {
            cout << "*";
            d--;
        }
        cout << endl;
    }
}

