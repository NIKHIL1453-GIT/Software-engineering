/*Assume a class cricketer is declared. Declare a derived class batsman from 
cricketer. Data member of batsman. Total runs, Average runs and best 
performance. Member functions input data, calculate average runs, Display 
data. (Single Inheritance) */

#include <iostream>
#include <string>
using namespace std;

class Cricketer {
protected:
    string name;
    int age;
public:
    void inputCricketerData() {
        cout << "Enter cricketer's name: ";
        cin.ignore(); 
        getline(cin, name);
        cout << "Enter cricketer's age: ";
        cin >> age;
    }

    void displayCricketerData() {
        cout << "\nCricketer Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Batsman : public Cricketer {
private:
    int totalRuns;
    float averageRuns;
    int bestPerformance;

public:
    void inputData() {
        inputCricketerData();
        cout << "Enter total runs: ";
        cin >> totalRuns;
        cout << "Enter best performance (highest score): ";
        cin >> bestPerformance;
        calculateAverage();
    }

    void calculateAverage() {
        averageRuns = totalRuns / 50.0;  // Assuming 50 innings played
    }

    void displayData() {
        displayCricketerData();
        cout << "Total Runs: " << totalRuns << endl;
        cout << "Average Runs: " << averageRuns << endl;
        cout << "Best Performance: " << bestPerformance << endl;
    }
};

int main() {
    Batsman batsman;
    cout << "\n--- Batsman Performance Tracker ---\n";
    batsman.inputData();
    cout << "\n--- Batsman Details ---\n";
    batsman.displayData();
    return 0;
}

