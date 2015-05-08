
#ifndef Quiz_h
#define Quiz_h
class QuizP;
#include <iostream>
#include <vector>
using namespace std;

/* 
 --- DO NOT CHANGE THIS FILE ---
 This file consists of the INTERFACE for the Quiz class.
 A Quiz represents a single quiz, consisting of a set of
 questions. Each question has a correct answer, along with
 0 to 3 wrong answers, making the quiz as a whole something
 you can "give" as a multiple-choice exam.
 
 Each method is listed below along with comments that describe
 what it does. */

class Quiz
{
 public:
    Quiz();
    // Constructs a plain quiz, containing a couple of sample questions
    
    string CurrentQuestion();
    // Retrieves the current question
    
    vector<string> PossibleAnswers();
    // Retrieves a list of possible answers to the current question,
    // in randomized order.
    // Note: all questions include at least one answer, the correct
    // one.
    
    bool AllQuestionsAnswered();
    // Returns true or false to indicate if all 
    // questions have been answered
    
    bool AnswerCurrentQuestion(string answer);
    // Marks the current question as answered with the given 
    // answer, returning true if that answer is correct.
    
    int NumQuestions();
    // Returns the number of questions in the quiz
    
    int NumCorrect();
    // Returns the number of questions answered correctly
    
    void Reset();
    // Resets the quiz, marking all questions as unanswered
    
    void RemoveAllQuestions();
    // Removes all questions from the quiz,
    
    void AddQuestion(string question,
                     string correctAnswer, 
                     string wrongAnswer1="",
                     string wrongAnswer2="",
                     string wrongAnswer3="");
    // Adds a new question to the quiz, along with the
    // correct answer and an optional list of up to 3 incorect
    // answers.
    
    
/*========================================================================*/
    
 private:
/*     
    You may have noticed the private section in this class
    declaration comes below the public section.
     
    That's because I'm trying to hide the member variables of
    the class.  This is how encapsulation works. Everything
    below here is really part of the IMPLEMENTATION details of the
    class. Your program's code will be CLIENT code of the class,
    and shouldn't care about these details.
 
     
     
     
     
    If you want to look below, that's okay, but I have to warn you
    it isn't for the faint-hearted. In fact, what you'll find 
    ahead is a little disturbing. 
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
    Actually, the truth is that this part of the Quiz.h file has
    been condemned. Among other things, it needs a seismic retrofit,
    and could easily fall on top of you in the event of an earthquake.
    You really aren't supposed to be here, it isn't safe.
    Proceed at your own risk.
 
     
     
     
     
     
     
    
 

    
    
     
     
     
     
     
    
 
 
 
 
 
 
    
 
 
 
    Warning: Avoid contact with skin and eyes. 
    Do not eat.
     
     
     
     
 
 
 
 
     
     
     
    Keep out of reach of children
 
 
 
 
 
 
 
 
 
 
 
 
 
 
    Not from concentrate. 
     
     
     
     
     
     
     
 
 
 
 
 
 
 
    May contain dangerous levels of cosmic ray spallation elements

     
     
     
    
 
 
 
 
 
 
 
 
 
 
 
 
     
    Are you still reading? Ok, well, I suppose there's no chance
    you'll stop now. Prepare yourself!
     
  
 
 
 
 
 
 
 
 
 
 
 
 
    it's...
     
     
     
     
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
    a...
 
 
 
 
 
 
 
 
 
 
 
 
    ...pimpl!  */
  

    
    QuizP * pimpl;
    
    
    
    
    
    
    
    
/*
     
     I hope that wasn't too disappointing. I feel bad that there
     wasn't something more exciting waiting down here, after all
     that scrolling you did.
     
     Oh. "What's a pimpl", you ask? 
     It's just a way of strongly hiding the implementation details of
     the class. Read the "pimpl" wikipedia article if you
     are interested.
     
*/
     
};


#endif
