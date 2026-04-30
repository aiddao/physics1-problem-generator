#include "data.h"

int main(int argc, char *argv[]){
    //load questions
    QuestionList list;
    if(!list.load_questions("questions.json")){
        return 1;
    }
    list.display_questions();
    //check if questions are loaded
        // if not return 1
    //start main operation
    return 0;
}
