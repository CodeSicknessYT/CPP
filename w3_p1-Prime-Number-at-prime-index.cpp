/* Write a program which takes input as an array of numbers between 
2 to 99, and print only those numbers which are prime and at 
the prime index. For example if input array is [4,5,2,8,9,19,6,12], 
it should print 2 - at index 2, 19 - at index 5. If array contains number 
outside 2-99 it should say invalid input. */

#include <iostream>
using namespace std;

int main()
{
    int a[100], n;
    cout << "Enter the size of the array" << endl;
    cin >> n;
    int temp;
    cout << "Enter the size of the array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        if (temp > 1 && temp < 100)
        {
            a[i] = temp;
        }
        else
        {
            cout << "Invalid input (Enter new value)" << endl;
            continue;
        }
    }

    cout << endl;
    for (int i = 2; i <= n; i++)
    {
        int flag = 0;
        int max = 0;
        if (a[i] > i)
            max = a[i];
        else
            max = i;

        for (int j = 2; j <= max; j++)
        {
            if ((a[i] % j == 0 && a[i] > j) || (i % j == 0 && i > j))
            {
                flag = 1;
                break;
            }
            else
                continue;
        }
        if (flag == 0)
        {
            cout << a[i] << " at index " << i << endl;
        }
    }
    return 0;
}