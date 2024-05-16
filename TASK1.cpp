// NUMBER  GUESSING GAME
#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int main()
{

    int num;
    srand(time(NULL));
    num = rand() % 100 + 1;
    int guess;
    int count=0;

    do
    {        cout << " Welcome to the number guess game\n Let's Start" << endl;
        cout << "Enter the  number " << endl;
        cin >> guess;

        if (guess == num)
        {
            goto out;
            count++;
        }
        else if (guess > num)
        {
            cout << "The number is too high" << endl;
            count++;
        }
        else if (guess<num)
        {
            cout << "the number is too low" << endl;
            count++;
        }
        else
        {
            cout<<"Invalid input"<<endl;
        }

    } while (guess != num);

out:
    cout << "your guessed in " << count << "attempt" << endl;

    return 0;
}