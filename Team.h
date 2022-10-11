//
// Created by Geoffrey Nix on 10/10/22.
//

#ifndef POLYMORPHISM_TEAM_H
#define POLYMORPHISM_TEAM_H

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Employee {
public:
    void SetName(string employeeName) {
        name = employeeName;
    }

    virtual void PrintInfo() {
        cout << name << endl;
    }

protected:
    string name;
};

class Coach : public Employee {
public:
    void SetSport(string setSport) {
        sport = setSport;
    }

    void PrintInfo() {
        cout << name << " coaches " << sport << endl;
    }

private:
    string sport;
};

class Author : public Employee {
public:
    void SetGenre(string setGenre) {
        genre = setGenre;
    }

    void PrintInfo() {
        cout << name << " writes " << genre << endl;
    }

private:
    string genre;
};

#endif //POLYMORPHISM_TEAM_H
