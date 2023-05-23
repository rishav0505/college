#include <iostream>
using namespace std;

class Player
{
    string name;
    int matches_played, runs_scored;

public:
    Player()
    {
        name = "";
        matches_played = 0;
        runs_scored = 0;
    }
    void setName(string s)
    {
        name = s;
    }
    void setMatchsPlayed(int n)
    {
        matches_played = n;
    }
    void setRunsScored(int n)
    {
        runs_scored = n;
    }
    string getName()
    {
        return name;
    }
    int getMatchsPlayed()
    {
        return matches_played;
    }
    int getRunsScored()
    {
        return runs_scored;
    }
    float getAvg()
    {
        if (runs_scored == 0 && matches_played == 0)
            return 0.0f;
        return runs_scored / (float)matches_played;
    }
};

int main()
{
    int nn, m, r;
    string n;
    cout << "Enter number of players: ";
    cin >> nn;
    Player p[nn], x, y, z;
    for (int i = 0; i < nn; i++)
    {
        cout << "Enter details for player " << i + 1 << ":\nName: ";
        cin >> n;
        cout << "Matches Played: ";
        cin >> m;
        cout << "Runs Scored: ";
        cin >> r;
        p[i].setName(n);
        p[i].setMatchsPlayed(m);
        p[i].setRunsScored(r);
    }
    x.setMatchsPlayed(0);
    y.setRunsScored(0);
    z.getAvg();
    for (int i = 0; i < nn; i++)
    {
        if (p[i].getMatchsPlayed() > x.getMatchsPlayed())
            x = p[i];
        if (p[i].getRunsScored() > y.getRunsScored())
            y = p[i];
        if (p[i].getAvg() > z.getAvg())
            z = p[i];
    }
    cout << "\nPlayer with \nMax matches played: " << x.getName();
    cout << "\nMax runs scored: " << y.getName();
    cout << "\nMax avg: " << z.getName() << " ( " << (float)z.getAvg() << " runs / match )";

    return 0;
}