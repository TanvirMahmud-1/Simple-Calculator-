#include <bits/stdc++.h>
using namespace std;

int main()
{
    double nums[5];
    int n;
    string op;

    cout << "How many numbers (max 5)? ";
    cin >> n;
    if (n < 1 || n > 5)
    {
        cout << "Invalid number of inputs!" << endl;
        return 0;
    }

    for (int i = 0; i < n; i++)
    {
        cout << "Enter number " << i + 1 << ": ";
        cin >> nums[i];
    }

    cout << "Enter operator (add, subtract, multiply, divide, modulus, percentage): ";
    cin >> op;

    double result = nums[0];

    if (op == "add")
    {
        for (int i = 1; i < n; i++)
            result += nums[i];
        cout << "Result: " << result << endl;
    }

    else if (op == "subtract")
    {
        for (int i = 1; i < n; i++)
            result -= nums[i];
        cout << "Result: " << result << endl;
    }

    else if (op == "multiply")
    {
        for (int i = 1; i < n; i++)
            result *= nums[i];
        cout << "Result: " << result << endl;
    }

    else if (op == "divide")
    {
        for (int i = 1; i < n; i++)
        {
            if (nums[i] == 0)
            {
                cout << "Error: Division by zero!" << endl;
                return 0;
            }
            result /= nums[i];
        }
        cout << "Result: " << result << endl;
    }

    else if (op == "modulus")
    {
        for (int i = 1; i < n; i++)
        {
            result = (int)result % (int)nums[i];
        }
        cout << "Result: " << (int)result << endl;
    }

    else if (op == "percentage")
    {
        for (int i = 1; i < n; i++)
        {
            result = (result * nums[i]) / 100;
        }
        cout << "Result: " << result << endl;
    }
    
    else
    {
        cout << "Invalid operator!" << endl;
    }

    return 0;
}
