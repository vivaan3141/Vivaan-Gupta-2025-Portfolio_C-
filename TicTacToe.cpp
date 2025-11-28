//
// Created by VivaanAnika on 8/29/25.
//

using namespace std;
# include <iostream>
# include <string>

string winConditions(string space[3][3]) {
    for (int i = 0; i < 3; i++) {
        if (space[i][0] == space[i][1] && space[i][1] == space[i][2]) {
            return space[i][0];
        }
    }

    for (int i = 0; i < 3; i++) {
        if (space[0][i] == space[1][i] && space[1][i] == space[2][i]) {
            return space[0][i];
        }
    }

    if (space[0][0] == space[1][1] && space[1][1] == space[2][2]) {
        return space[0][0];
    }

    if (space[0][2] == space[1][1] && space[1][1] == space[2][0]) {
        return space[0][2];
    }

    return "";
}

int main() {
    string space[3][3];
    cout << space[0][0] << endl;
    int n1;
    int n2;
    int n;
    cout << "1|3|3" << endl;
    cout << "4|5|6" << endl;
    cout << "7|8|9" << endl;


    for (int i = 0; i < 5; i++) {
        cout << "Player 1 Turn. X coodinate" << endl;
        cin >> n1;

        cout << "Player 1 Turn. y coodinate" << endl;
        cin >> n2;

        space[n1][n2] = "X";

        string winner = winConditions(space);
        if (winner != "") {
            cout << "We hav a winner, congrats " << winner << endl;
            exit(0);
        }


        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                cout << space[i][j];
            }
            cout << endl;
        }

        cout << "Player 2 Turn. X coodinate" << endl;
        cin >> n1;
        cout << "Player 2 Turn. y coodinate" << endl;
        cin >> n2;
        space[n1][n2] = "O";
        string w = winConditions(space);
        if (w != "") {
            cout << "We hav a winnr, congrats " << w << endl;
            exit(0);
        }

        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (space[i][j] == "") {
                    cout << "_";
                } else {
                    cout << space[i][j];
                }
            }
            cout << endl;
        }
    }
}
