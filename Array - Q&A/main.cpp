#include <iostream>

using namespace std;

int main()
{
    const int SIZE = 5;
    string questions[SIZE] = {"What is your favorite color? ", "\nYour favorite movie? ", "\nYour favorite cereal? ",
                              "\nYour favorite food? ", "\nYour bed time? "};
    string answers [SIZE] = {"Blue", "B2F", "Chex", "Pizza", "10pm"};

    int numberOfAnswersUserGotRight = 0;
    for (int i=0; i<SIZE; i++)
    {
        string answer;
        cout << questions[i] << " ";
        cin >> answer;
        if (answer == answers[i])
        {
            numberOfAnswersUserGotRight++;
        }
        else
        {
            cout << "No, sorry, the answer is: " << answers[i] << endl;
        }
    }
    cout << "Your score: " << numberOfAnswersUserGotRight << endl;
    return 0;
}
