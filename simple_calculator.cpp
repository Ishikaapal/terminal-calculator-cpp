#include <iostream>
using namespace std;

float addition(float a, float b)
{
    return a + b;
}

float subtraction(float a, float b)
{
    return a - b;
}

float multiplication(float a, float b)
{
    return a * b;
}

float division(float a, float b)
{
    if (b == 0)
    {
        cout << "Division by 0 is not valid" << endl;
        return 0;
    }
    else
    {
        return a / b;
    }
}

int main()  // ✅ Correct return type
{
    bool condition = true;

    while (condition)
    {
        cout << "\n*** Simple Calculator ***" << endl;
        cout << "1. Addition " << endl;
        cout << "2. Subtraction " << endl;
        cout << "3. Multiplication " << endl;
        cout << "4. Division " << endl;
        cout << "5. Exit" << endl;

        int user_operation;  // ✅ Correct type
        cout << "Enter the choice from above : ";
        cin >> user_operation;

        float a, b;

        switch (user_operation)
        {
        case 1:
            cout << "Enter two numbers : ";
            cin >> a >> b;
            cout << "The result of " << a << " + " << b << " is : " << addition(a, b) << endl;
            break;

        case 2:
            cout << "Enter two numbers : ";
            cin >> a >> b;
            cout << "The result of " << a << " - " << b << " is : " << subtraction(a, b) << endl;
            break;

        case 3:
            cout << "Enter two numbers : ";
            cin >> a >> b;
            cout << "The result of " << a << " * " << b << " is : " << multiplication(a, b) << endl;
            break;

        case 4:
            cout << "Enter two numbers : ";
            cin >> a >> b;
            cout << "The result of " << a << " / " << b << " is : " << division(a, b) << endl;
            break;

        case 5:
            condition = false;
            cout << "Thank you for using the calculator!" << endl;
            break;

        default:
            cout << "Invalid choice, please choose from the above options." << endl;
            break;
        }
    }

    return 0;
}
