#include <iostream>
#include <string>
using namespace std;

struct Question {
    string question;
    string options[4];
    char correct; // store correct option (A/B/C/D)
};

int main() {
    // Create questions
    Question quiz[3] = {
     
        {"What is the capital of France?", {"A. Paris", "B. London", "C. Rome", "D. Berlin"}, 'A'},
        {"Which language is used for game development?", {"A. HTML", "B. C++", "C. CSS", "D. SQL"}, 'B'},
        {"Which planet is known as the Red Planet?", {"A. Earth", "B. Venus", "C. Mars", "D. Jupiter"}, 'C'}
    };

    int score = 0;
    char answer;

    cout << "=== ❓ Quiz Game ===" << endl;

    for (int i = 0; i < 3; i++) {
        cout << "\nQ" << i+1 << ": " << quiz[i].question << endl;
        for (int j = 0; j < 4; j++) {
            cout << quiz[i].options[j] << endl;
        }

        cout << "Enter your answer (A/B/C/D): ";
        cin >> answer;

        if (toupper(answer) == quiz[i].correct) {
            cout << "✅ Correct!" << endl;
            score++;
        } else {
            cout << "❌ Wrong! Correct answer is " << quiz[i].correct << endl;
        }
    }

    cout << "\n🎯 Your Final Score: " << score << "/3" << endl;

    if (score == 3) cout << "🏆 Excellent!" << endl;
    else if (score == 2) cout << "👍 Good job!" << endl;
    else cout << "😢 Try again!" << endl;

    return 0;
}