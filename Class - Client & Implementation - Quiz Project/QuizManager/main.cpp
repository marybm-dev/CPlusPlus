#include <iostream>
#include "Quiz.h"
#include "lpclib.h"
using namespace std;

void askOneQuestion (Quiz &thequiz);

int main (int argc, const char * argv[])
{
    Quiz simplequiz;

    while(!simplequiz.AllQuestionsAnswered())
    {
        askOneQuestion(simplequiz);
        cout << "===================================\n\n";
    }

    cout << "Final Score: " << simplequiz.NumCorrect() << " / " << simplequiz.NumQuestions() << endl;
}

void askOneQuestion (Quiz &thequiz)
{
    string userAnswer;
    vector<string>possibleAnswers;
    possibleAnswers = thequiz.PossibleAnswers();
    cout << thequiz.CurrentQuestion() << " \n";

    for (int i =0; i < possibleAnswers.size(); i ++)
    {
        cout << possibleAnswers[i] << endl;
    }

    userAnswer = GetLine();

    bool result = thequiz.AnswerCurrentQuestion(userAnswer);
    if (result == true)
        cout << "YES!\n";
    else    cout << "Nope, sorry, not right.\n";
}
