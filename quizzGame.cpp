#include <iostream>
#include <string>
#include <cctype> 

using namespace std;

         // Model A 
int run_model_a() {
    string questionsA[5] = {
        "What does this code print?\nfor(int i=0; i < 5; i++){\n    if(i==3) continue;\n    cout << i << \" \";\n}",
        "Who is the modern computer father?",
        "What is the decimal value of 0x1F?",
        "What is the correct way to define a function that returns an int?",
        "What is the difference between while and do-while?"
    };
    string choicesA[5] = {
        "a) 0 1 2 3 4\nb) 0 1 2 4\nc) 1 2 4 5\nd) 0 1 2 3",
        "a) Charles Babbage\nb) Ada Lovelace\nc) Alan Turing\nd) John von Neumann",
        "a) 15\nb) 32\nc) 16\nd) 31",
        "a) function add(int a, int b)\nb) int add(int a, int b)\nc) def add(a, b)\nd) add(int a, int b) -> int",
        "a) No difference\nb) do-while runs faster\nc) do-while executes at least once\nd) while loops only 10 times"
    };
    char answersA[5] = { 'b', 'c', 'd', 'b', 'c' };

    int score = 0;
    char user_input;
    for (int i = 0; i < 5; i++) {
        cout << "\nQuestion " << i + 1 << ":\n" << questionsA[i] << "\n\n" << choicesA[i];
        cout << "\nEnter your choice: ";
        cin >> user_input;
        if (tolower(user_input) == answersA[i]) {
            cout << "Correct!\n";
            score += 2; 
        }
        else {
            cout << "Incorrect! Correct answer is: " << answersA[i] << endl;
        }
    }
    return score;
}

                // Model B 
int model_Bfun() {
    int score = 0;
    char answer;
    string questions[] = { "Who invented C++?", "Correct way to declare void function?", "Convert 2F5 to binary", "Terminate statement?", "Difference between = and ==" };
    string options[5][4] = {
        {"A. Bjarne Stroustrup", "B. Guido", "C. John", "D. Mark"},
        {"A. null", "B. def", "C. void myFun()", "D. int"},
        {"A) 0011", "B) 0010 1111 0101", "C) 0110", "D) 0101"},
        {"A) :", "B) .", "C) ;", "D) }"},
        {"A) = is assignment, == is comparison", "B) Reverse", "C) Strings", "D) Integers"}
    };
    char answers_B[] = { 'A', 'C', 'B', 'C', 'A' };

    for (int i = 0; i < 5; i++) {
        cout << "\n" << questions[i] << endl;
        for (int j = 0; j < 4; j++) cout << options[i][j] << "  ";
        cout << "\nYour answer: ";
        cin >> answer;
        if (toupper(answer) == answers_B[i]) {
            cout << "Correct!\n";
            score += 2;
        }
        else cout << "Wrong!\n";
    }
    return score;
}

             // Model C
int modelc() {
    int score = 0;
    char answ; 
    string questions[5] = { "Header for cin/cout?", "Hex F in decimal?", "Which is a loop?", "Father of analytical engine?", " int a = 2 , b=3 ; what is the output of a++ * --b?" };
    string options[5][4] = {
        {"A.<cmath>", "B.<string>", "C.<iostream>", "D.<iomanip>"},
        {"A.10", "B.15", "C.16", "D.12"},
        {"A.if", "B.while", "C.switch", "D.break"},
        {"A.Gates", "B.Babbage", "C.Tesla", "D.Jobs"},
        {"A.4", "B.6", "C.5", "D.3"}
    };
    char correctanswers[5] = { 'C', 'B', 'B', 'B', 'A' };

    for (int i = 0; i < 5; i++) {
        cout << "\n" << questions[i] << endl;
        for (int j = 0; j < 4; j++) cout << options[i][j] << "  ";
        cout << "\nYour answer: ";
        cin >> answ;
        if (toupper(answ) == correctanswers[i]) {
            cout << "Correct!\n";
            score += 2;
        }
        else cout << "Wrong!\n";
    }
    return score;
}

          // Model D
struct Question {
    string questionText;
    string options[4];
    char correctAnswer;
};

int ModelD() {
    Question modelDQuestions[10] = {
        {"1-What happens if you make a Constructor private?", {"A) you get a compiler error", "B) you can't create the object directly", "C) the program crashes", "D) it causes a memory leak"}, 'B'},
        {"2- how do you stop a class from being inherited?", {"A) final", "B) static", "C) const", "D) virtual"}, 'A'},
        {"3- what exactly is a nullptr?", {"A) Zeroed memory ", "B) an invalid memory adress", "C) a null pointer literal", "D) an empty object"}, 'C'},
        {"4- what is a memory leak?", {"A) Reusing memory that was already freed", "B) Forgetting to free memory you allocated", "C) Running out of stack space", "D) The program crashing"}, 'B'},
        {"5- What do virtual functions actually let you do?", {"A) Function overloading", "B) Polymorphism", "C) Encapsulation", "D) Abstraction"}, 'B'},
        {"6- What does RAII stand for?", {"A) Runtime allocation", "B) Resource acquisition is initialization", "C) Random access interface", "D) Real allocation input"}, 'B'},
        {"7- When exactly does a memory leak happen?", {"A) When a pointer is deleted", "B) When memory is safely freed", "C) When allocated memory is not freed", "D) When the stack overflows"}, 'C'},
        {"8- What's the result of using memory after it's been freed ?", {"A) Memory leak", "B) Dangling pointer", "C) Segmentation fault", "D) Undefined behavior"}, 'D'},
        {"9- When does a temporary object get destroyed?",{"A) End of the function", "B) End of the full expression", "C) End of the program", "D) During compilation"}, 'B'},
        {"10 - What does std::move actually do ? ",{"A) Moves memory around", "B) Casts to an rvalue reference", "C) Copies the object", "D) Deletes the object"},'B'}
    };

    int score = 0;
    char answer;
    for (int i = 0; i < 10; i++) {
        cout << "\n" << modelDQuestions[i].questionText << "\n";
        for (int j = 0; j < 4; j++) cout << modelDQuestions[i].options[j] << "\n";
        cout << "Your answer: ";
        cin >> answer;
        if (toupper(answer) == modelDQuestions[i].correctAnswer) {
            cout << "Correct!\n";
            score += 2; 
        }
        else cout << "Incorrect.\n";
    }
    return score;
}

int main() {
    char modelChoice;
    int finalScore = 0;

    cout << "______________________________________\n";
    cout << "      WELCOME TO THE QUIZ GAME        \n";
    cout << "--------------------------------------\n";
    cout << "Choose a Model (A, B, C, or D):\n ";
    cin >> modelChoice;
    modelChoice = toupper(modelChoice);

    switch (modelChoice) {
    case 'A':
        finalScore = run_model_a();
        cout << "\nModel A Finished and Your Score: " << finalScore << "/10\n";
        break;
    case 'B':
        finalScore = model_Bfun();
        cout << "\nModel B Finished and Your Score: " << finalScore << "/10\n";
        break;
    case 'C':
        finalScore = modelc();
        cout << "\nModel C Finished and Your Score: " << finalScore << "/10\n";
        break;
    case 'D':
        finalScore = ModelD();
        cout << "\nModel D Finished and Your Score: " << finalScore << "/20\n";
        break;
    default:
        cout << "Invalid choice. Please restart.\n";
        return 0;
    }

}