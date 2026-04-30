#ifndef DATA_H
#define DATA_H

#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

class Question {
    private:
        string question;
        string first_hint;
        string second_hint;
    public:
        Question(string q, string f, string s) : question(q), first_hint(f), second_hint(s) {}
        string getQuestion();
        string getFirstHint();
        string getSecondHint();
};

class QuestionList {
    private:
        vector<Question> questions;
    public:
        QuestionList();
        bool load_questions(const string& filename);
        void get_questions() const;
        void get_questions(int index) const;
        void display_questions();
};

#endif