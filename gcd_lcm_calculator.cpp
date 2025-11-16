#include <bits/stdc++.h>
using namespace std;

// Function to calculate GCD of two numbers

int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to calculate LCM of two numbers

int lcm(int a, int b)
{
    return (a / gcd(a, b)) * b; // optimized to avoid overflow
}

int main()
{
    int nums[5], n;
    string op;

    cout << "How many numbers (max 5)? ";
    cin >> n;
    if (n < 2 || n > 5)
    {
        cout << "Invalid number of inputs! Must be at least 2." << endl;
        return 0;
    }

    for (int i = 0; i < n; i++)
    {
        cout << "Enter number " << i + 1 << ": ";
        cin >> nums[i];
    }

    cout << "Enter operation (gcd, lcm): ";
    cin >> op;

    if (op == "gcd")
    {
        int result = nums[0];
        for (int i = 1; i < n; i++)
        {
            result = gcd(result, nums[i]);
        }
        cout << "GCD: " << result << endl;
    }

    else if (op == "lcm")
    {
        int result = nums[0];
        for (int i = 1; i < n; i++)
        {
            result = lcm(result, nums[i]);
        }
        cout << "LCM: " << result << endl;
    }

    else
    {
        cout << "Invalid operation!" << endl;
    }

    return 0;
}
