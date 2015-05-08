

class Person
{
    vector<string> skillz;
    Person * parent;

};


Person bob;
vector<Person *> family;


//EXPRESSION            //TYPE OF THE EXPRESSION
bob.skillz              // vector of string
family                  // vector of pointers to Person
family[1]               // pointer to Person
(*family[1]).skillz     // vector of string same as family[1]->skillz
family[1]->skillz       // vector of string
bob.parent              // pointer to Person
*(bob.parent)           // Person
