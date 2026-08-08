#include <iostream>
#include <string>
using namespace std;

class CricketPlayer {
private:
    string playerName;
    int matchesPlayed;
    int totalRuns;
    float average;

public:
    void acceptDetails() {
        cout << "Enter Player Name: ";
        cin.ignore();
        getline(cin, playerName);

        cout << "Enter Matches Played: ";
        cin >> matchesPlayed;

        cout << "Enter Total Runs: ";
        cin >> totalRuns;
    }

    void calculateAverage() {
        if (matchesPlayed == 0)
            average = 0;
        else
            average = (float)totalRuns / matchesPlayed;
    }

    void displayReport() {
        cout << "\n------ Player Report ------\n";
        cout << "Player Name      : " << playerName << endl;
        cout << "Matches Played   : " << matchesPlayed << endl;
        cout << "Total Runs       : " << totalRuns << endl;
        cout << "Batting Average  : " << average << endl;

        if (average >= 50)
            cout << "Performance      : Excellent";
        else if (average >= 35)
            cout << "Performance      : Good";
        else if (average >= 20)
            cout << "Performance      : Average";
        else
            cout << "Performance      : Poor";

        cout << endl;
    }
};

int main() {
    CricketPlayer p;
    p.acceptDetails();
    p.calculateAverage();
    p.displayReport();

    return 0;
}