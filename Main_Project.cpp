#include <iostream>
#include <string>
using namespace std;

float strike_rate(int total, int bowls) {
    return (bowls == 0) ? 0 : (float(total) / bowls) * 100;
}

float economy(int total, int over) {
    return (over == 0) ? total : float(total) / over;
}

void batsman_tracker() {
    int num_players;
    cout << "Enter the number of batsmen: ";
    cin >> num_players;

    string names[num_players];
    int total[num_players] = {0}, bowls[num_players] = {0}, misses[num_players] = {0}, boundaries[num_players] = {0};

    for (int i = 0; i < num_players; i++) {
        cout << "Enter the name of batsman " << i + 1 << ": ";
        cin >> names[i];

        int runs;
        cout << "Enter the scores for " << names[i] << " (Enter -1 when the player gets out):\n";
        while (true) {
            cin >> runs;
            if (runs == -1) break;
            if (runs >= 0 && runs <= 7) {
                bowls[i]++;
                total[i] += runs;
                if (runs == 4 || runs == 6) boundaries[i]++;
                if (runs == 0) misses[i]++;
            } else {
                cout << "Invalid score. Try again.\n";
            }
        }

        cout << "\nScorecard for " << names[i] << ":\n";
        cout << "Balls played: " << bowls[i] << "\n";
        cout << "Balls missed: " << misses[i] << "\n";
        cout << "Boundaries scored: " << boundaries[i] << "\n";
        cout << "Strike rate: " << strike_rate(total[i], bowls[i]) << "\n";
        cout << "Total runs: " << total[i] << "\n";
        cout << "-----------------------------\n";
    }

    int best_index = 0;
    for (int i = 1; i < num_players; i++) {
        if (total[i] > total[best_index]) best_index = i;
    }
    cout << names[best_index] << " had the best performance.\n";
}

void bowler_tracker() {
    int num_players, overs;
    cout << "Enter the number of bowlers: ";
    cin >> num_players;

    cout << "Enter the number of overs for the match (max 5): ";
    cin >> overs;
    overs = min(overs, 5) * 6; // Convert overs to balls (max 30 balls)

    string names[num_players];
    int total[num_players] = {0}, 
	balls[num_players] = {0},
	extras[num_players] = {0}, 
	wickets[num_players] = {0}, 
	boundaries[num_players] = {0} ,
	missed[num_players] = {0},
	extra[num_players] = {0};
    char wide;
    for (int i = 0; i < num_players; i++) {
        cout << "Enter the name of bowler " << i + 1 << ": ";
        cin >> names[i];

        int runs;
        cout << "Enter the scores for " << names[i] << " (Enter -1 for a wicket):\n";
        for (int j = 0; j < overs; j++) {
            cin >> runs;
            if (runs == -1) {
                balls[i]++;
                wickets[i]++;
            } else if (runs >= 0 && runs <= 7) {
                balls[i]++;
                total[i] += runs;
                if (runs == 4 || runs == 6) boundaries[i]++;
                if (runs == 0) missed[i]++;
                if (runs == 5 || runs == 7) extras[i]++;
                if (runs == 1){
				 cout<<"enter Y or y for wide and N or n for not ";
				 cin>>wide;
				 if(wide=='Y' || wide=='y')
				 extra[i]++;
            }
            } else {
                cout << "Invalid score. Try again.\n";
            }
        }

        cout << "\nScorecard for " << names[i] << ":\n";
        cout << "Balls bowled: " << balls[i] << "\n";
        cout << "Wickets taken: " << wickets[i] << "\n";
        cout << "Boundaries conceded: " << boundaries[i] << "\n";
        cout << "Extras: " << extras[i] << "\n";
        cout << "Wide: " << extra[i] << "\n";
        cout << "Total runs conceded: " << total[i] << "\n";
        cout << "Economy rate: " << economy(total[i], balls[i] / 6) << "\n";
        cout << "-----------------------------\n";
    }

    int best_index = 0;
    for (int i = 1; i < num_players; i++) {
        if (total[i] < total[best_index]) best_index = i;
    }
    cout << names[best_index] << " had the best performance.\n";
}

int main() {
    string role;
    cout << "Are you tracking a batsman or a bowler? ";
    cin >> role;

    if (role == "batsman") {
        batsman_tracker();
    } else if (role == "bowler") {
        bowler_tracker();
    } else {
        cout << "Invalid input. Please enter 'batsman' or 'bowler'.\n";
    }

    return 0;
}

