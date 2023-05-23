#include <iostream>
using namespace std;

class ticket_counter
{
    unsigned int total_passengers;
    double total_amount;

public:
    ticket_counter()
    {
        total_passengers = 0;
        total_amount = 0.0;
    }
    void paying_passenger()
    {
        total_passengers++;
        total_amount += 50;
    }
    void child_passenger()
    {
        total_passengers++;
    }
    void display()
    {
        cout << "Total Passengers: " << total_passengers;
        cout << "\nTotal Amount: " << total_amount;
    }
};
int main()
{
    ticket_counter a;
    cout << "Enter :\n1 for paying passenger\n2 for child passenger\n3 for display and exit\n";
    int key;
    do
    {
        cout << "Enter key: ";
        cin >> key;
        if (key == 1)
            a.paying_passenger();
        else if (key == 2)
            a.child_passenger();
        else if (key == 3)
            a.display();
        else
            cout << "Plz enter a valid key!\n";
    } while (key != 3);

    return 0;
}