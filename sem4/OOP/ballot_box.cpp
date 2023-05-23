#include <iostream>
using namespace std;

class ballotBox
{
    int count[5], spoilt_ballot;

public:
    ballotBox()
    {
        for (int i = 0; i < 5; i++)
            count[i] = 0;
        spoilt_ballot = 0;
    }
    void read(int n)
    {
        int x;
        for (int i = 0; i < n; i++)
        {
            cout << "Enter vote: ";
            cin >> x;
            if (x > 0 && x < 6)
                count[x - 1]++;
            else
                spoilt_ballot++;
        }
    }
    void display()
    {
        cout << "\nVotes:";
        for (int i = 0; i < 5; i++)
            cout << "\nCandidate " << i + 1 << " = " << count[i];
        cout << "\nSpoilt Ballot = " << spoilt_ballot;
    }
};

int main()
{
    int n;
    cout << "Enter total ballots: ";
    cin >> n;
    ballotBox a;
    a.read(n);
    a.display();
    return 0;
}