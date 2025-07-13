#include <iostream>
using namespace std;

int addition(int a, int b)
{
    return a + b;
}

int subtraction(int a, int b)
{
    return a - b;
}

int multiplication(int a, int b)
{
    return a * b;
}

int division(int a, int b)
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
int main()
{
    bool condition = true;

    while (condition)
    {
        cout << "*** Simple Calculator ***" << endl;
        cout << "1. Addition " << endl;
        cout << "2. Subtraction " << endl;
        cout << "3. Multiplication " << endl;
        cout << "4. Division " << endl;
        cout << "5. Exit" << endl;

        int user_operation;
        cout << "Enter the choice from above : ";
        cin >> user_operation;

         int a, b;

        switch (user_operation)
        {

        case 1:
            /* code */
           
            cout << "Enter two numbers : ";
            cin >> a >> b;
            cout << "The result of " << a << "+" << b << " is : " << addition(a, b);
            break;

        case 2:
            /* code */
            // int a , b;
            cout << "Enter two numbers : ";
            cin >> a >> b;
            cout << "The result of " << a << "-" << b << " is : " << subtraction(a, b);
            break;

        case 3:
            /* code */
            // int a , b;
            cout << "Enter two numbers : ";
            cin >> a >> b;
            cout << "The result of " << a << "*" << b << " is : " << multiplication(a, b);
            break;

        case 4:
            /* code */
            // int a , b;
            cout << "Enter two numbers : ";
            cin >> a >> b;
            cout << "The result of " << a << "/" << b << " is : " << division(a, b);
            break;

        case 5:
            /* code */
            condition = false;
            break;

        default:
            cout<<"Invalid choice , choose from the above."<<endl;
            break;
        }

    }
    return 0;
}
