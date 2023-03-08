#include <iostream>
using namespace std;

const int SIZE = 10;

void printGrades(int grades[]) {
    cout << "qualification -> ";
    for (int i = 0; i < SIZE; i++) {
        cout << grades[i] << " ";
    }
    cout << endl;
}

void retakeExam(int grades[]) {
    int index, newGrade;
    cout << "Enter the index of the grade you want to change: ";
    cin >> index;
    cout << "Enter the new grade: ";
    cin >> newGrade;
    grades[index] = newGrade;
    cout << "Grade updated." << endl;
}

void checkScholarship(int grades[]) {
    int sum = 0;
    for (int i = 0; i < SIZE; i++) {
        sum += grades[i];
    }
    double avg = (double)sum / SIZE;
    if (avg >= 10.7) {
        cout << "Congratulations! You are eligible for a scholarship." << endl;
    }
    else {
        cout << "Sorry, your average grade is too low for a scholarship." << endl;
    }
}

int main() {
    int grades[SIZE];
    for (int i = 0; i < SIZE; i++) {
        cout << "Enter grade " << i + 1 << ": ";
        cin >> grades[i];
    }

    int choice;
    do {
        cout << "Menu:" << endl;
        cout << " Grade" << endl;
        cout << " Exam" << endl;
        cout << " qualification" << endl;
        cout << " Quit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            printGrades(grades);
            break;
        case 2:
            retakeExam(grades);
            break;
        case 3:
            checkScholarship(grades);
            break;
        case 4:
            cout << "Goodbye!" << endl;
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
            break;
        }
    } while (choice != 4);

    return 0;
}
