#include <iostream>

using namespace std;

int main()
{
    bool ships[4][4]{
        {1,0,0,1},
        {0,0,0,0},
        {0,0,1,1},
        {1,0,1,0},
    };

    int hits=0, turns=0;


    while (hits<4) {
        int row, column;

        cout<<"Selecting coordinates\n";

        cout<<"Choose a row number between 0 and 3: ";
        cin>>row;

        cout<<"Choose a column number between 0 and 3: ";
        cin>>column;

        if (ships[row][column]) {
            ships[row][column] = 1;
            hits++;
            cout<<"Hit! "<< (4-hits) << " left.\n\n";
        }else{
            cout<< "Miss!\n\n";
        }
        turns++;
    }

    cout<< "Victory!\t";
    cout<< "You won in "<<turns<<" turns";


    return 0;
}
