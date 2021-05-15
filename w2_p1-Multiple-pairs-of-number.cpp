//---Problem 2 - Multiple pairs of number 'num'
//---To find out all positive whole numbers x and y
//---satisfying the equation x*y = num

#include <iostream>
using namespace std;
int main()
{
    int n = 130;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            int div = n / i;
            cout << i << " " << div << endl;
        }
    }

    return 0;
}

// @CodeSickness
