// simple calculator
#include <iostream>

using namespace std;

int main()
{
    float num1, num2;
    int choice;

    cout << "Enter the number 1:" << endl;
    cin >> num1;
    cout << "Enter the number 2:" << endl;
    cin >> num2;
    cout <<"Enter\n 1-Addition\n 2-Subtraction\n 3-Multiplication\n 4-Division" << endl;
    cin >> choice;
    switch (choice)
    {
    case 1:
        cout << "The Addition of " << num1 << " and " << num2 << " is " << num1 + num2 << endl;
        break;
    case 2:
        cout << "The Subtraction of " << num1 << " and " << num2 << " is " << num1 - num2 << endl;
        break;
    case 3:
        cout << "The Multiplication of " << num1 << " and " << num2 << " is " << num1 * num2 << endl;
        break;
    case 4:
        if (num2 != 0)
        {
            cout << "The Division of " << num1 << " and " << num2 << " is " << num1 / num2 << endl;
        }
        else
        {
            cout << "The number cannot be divisible by 0" << endl;
        }
        break;
    default:
        cout << "Please choose the valid option" << endl;
    }

    return 0;
}