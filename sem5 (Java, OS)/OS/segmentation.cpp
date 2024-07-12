#include <iostream>
using namespace std;

int main()
{
    const int MAX_SEGMENTS = 5; // Maximum number of segments
    const int segmentationTable[MAX_SEGMENTS][3] = {
        {1000, 1400},
        {400, 6300},
        {400, 4300},
        {1100, 3200},
        {1000, 4700}};

    int segments = MAX_SEGMENTS; // Number of segments

    // Calculate and print the start and end addresses for each segment
    cout << "Segment Allocation in Physical Memory:\n";
    for (int i = 0; i < segments; i++)
    {
        int startAddress = segmentationTable[i][1];
        int endAddress = startAddress + segmentationTable[i][0] - 1;

        cout << "Segment " << i << ": ";
        cout << "Start Address: " << startAddress << ", ";
        cout << "End Address: " << endAddress << endl;
    }

    return 0;
}
