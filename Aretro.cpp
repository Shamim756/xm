#include <bits/stdc++.h>


using namespace std;

int main() {
    int start_x, start_y;
    string navigation_string;

    // Read the starting point
    cin >> start_x >> start_y;

    // Read the navigation string
    cin >> navigation_string;

    // Initialize the current position with the starting point
    int current_x = start_x;
    int current_y = start_y;

    // Process the navigation string
    for (char direction : navigation_string) {
        if (direction == 'U') {
            current_y++;
        } else if (direction == 'D') {
            current_y--;
        } else if (direction == 'R') {
            current_x++;
        } else if (direction == 'L') {
            current_x--;
        }
    }

    // The final position after following all instructions is the location of planet "RetroP"
    cout << current_x << " " << current_y << endl;

    return 0;
}