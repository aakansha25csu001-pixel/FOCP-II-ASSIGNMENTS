#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

    string name;

    cout << "===== Student Excuse Generator =====" << endl;
    cout << "Enter student name: ";
    getline(cin, name);

    vector<string> excuses = {

        name + " couldn't finish the assignment because the laptop updated for 6 hours.",

        name + " was ready to study, but the Wi-Fi suddenly disappeared.",

        name + "'s pet sat on the keyboard and deleted the homework accidentally.",

        name + " spent the entire night trying to remember the forgotten password.",

        name + " almost completed the work when the power cut ruined everything.",

        name + " got trapped in a family function and couldn't escape in time.",

        name + " was attacked by 27 notifications and lost focus completely.",

        name + " started the homework on time but somehow ended up watching cooking videos.",

        name + "'s brain stopped working after opening too many tabs at once.",

        name + " was about to submit the assignment when the computer froze dramatically."
    };

    srand(time(0));

    int randomIndex = rand() % excuses.size();

    cout << "\n===== Generated Excuse =====" << endl;
    cout << excuses[randomIndex] << endl;

    return 0;
}
