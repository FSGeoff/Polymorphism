#include <iostream>
#include <string>
#include <vector>

#include "Team.h"

using namespace std;

int main() {
    Employee* person1;
    Coach* person2;
    Author* person3;

    vector<Employee*> personList;
    unsigned int i;

    person1 = new Employee();
    person1->SetName("Amy");

    person2 = new Coach();
    person2->SetName("Jose");
    person2->SetSport("football");

    person3 = new Author();
    person3->SetName("Wes");
    person3->SetGenre("poetry");

    personList.push_back(person2);
    personList.push_back(person3);
    personList.push_back(person1);

    for (i = 0; i < personList.size(); ++i) {
        personList.at(i)->PrintInfo();
    }

    return 0;
}