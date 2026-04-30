#include "data.h"

string Question::getQuestion(){
    return question;
}
string Question::getFirstHint(){
    return first_hint;
}
string Question::getSecondHint(){
    return second_hint;
}

bool QuestionList::load_questions(const string& filename) {
    // Implementation for loading questions from a file
    return false;
}

void QuestionList::get_questions() const {
    return;
}

void QuestionList::get_questions(int index) const {
    return;
}

void QuestionList::display_questions() {
    for (auto& question : questions) {
        cout << question.getQuestion() << endl;
        cout << "Hint 1: " << question.getFirstHint() << endl;
        cout << "Hint 2: " << question.getSecondHint() << endl;
    }
}