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
    ifstream file(filename);
    if (!file.is_open()) {
        return false;
    }
    // Read questions from the file
    string line, question, first_hint, second_hint;
    while (getline(file, line)) {
        if(line.find("question") != string::npos) {
            question = line.substr(line.find(":") + 3, line.find_last_of("\"") - (line.find(":") + 3));
        } else if(line.find("first_hint") != string::npos) {
            first_hint = line.substr(line.find(":") + 3, line.find_last_of("\"") - (line.find(":") + 3));
        } else if(line.find("second_hint") != string::npos) {
            second_hint = line.substr(line.find(":") + 3, line.find_last_of("\"") - (line.find(":") + 3));
        }
        if(!question.empty() && !first_hint.empty() && !second_hint.empty()){
            questions.push_back(Question(question, first_hint, second_hint));
        }
    }
    file.close();
    return true;
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