
// TO-DO Manager
#include <iostream>
#include <stdlib.h>
#include <limits>

using namespace std;

string task[50];
string mark[50];
int total=0;
void add()
{
    int n;
    cout << "How many tasks do you want to add?" << endl;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    for (int i = total; i < (total+n); i++)
    {
        cout << "Enter the task no " << i + 1 << ": " << endl;
        getline(cin, task[i]);
    }
    total =total + n;
    for (int i = 0; i < total; i++)
    {
        mark[i] = "Pending";
    }
}
void remove()
{
    int a;
    cout << "which number of task you want to delete?";
    cin >> a;
    for (int i = a - 1; i <= total; i++)
    {
        task[i - 1] = task[i];
    }
    cout << "Removed Successfully" << endl;
    total--;
}
void view()
{
    for (int i = 0; i < total; i++)
    {
        cout << i + 1 << " : " << task[i] << "    -->" << mark[i] << endl;
    }
}
void m()
{

    int a, b;
    cout << "How many tasks are completed?";
    cin >> b;
    for (int i = 0; i < b; i++)
    {
        cout << "which number of task  is completed?" << endl;
        cin >> a;
        mark[a - 1] = "Completed";
    }
}
int main()
{
    int c;
    cout << " <------   Welcome  to the TO-DO  List Manager  ------->" << endl;

    do
    {
        cout << "    Enter your choice   \n You want to -----\n 1.Add a Task \n 2.View a Task \n 3.Remove a Task \n 4.Mark the task \n 5.Exit" << endl;
        cin >> c;
        switch (c)
        {
        case 1:
            add();
            break;
        case 2:
            view();
            break;
        case 3:
            remove();
            break;
        case 4:
            m();
            break;
        case 5:
            exit(0);
            break;

        default:
            cout << "Enter a valid choice;" << endl;
        }

    } while (c != 5);

    return 0;
}
