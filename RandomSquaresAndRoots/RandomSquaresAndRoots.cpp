//This program will generate 5 random numbers between 1-20, then output their squares and their square roots.

#include <iostream>
#include <ctime>
#include <cmath>
using namespace std;

int main()
{
    //declaring arrays
    float Numbers[5][3], randNum;
    int i, j;
    bool flag = 0;

    //generating numbers
    srand((unsigned)time(0));
    for (i = 0; i < 5; i++) {
        randNum = (rand() % 20 + 1); //generating random number

        //checking if number generated is already in the array
        for (j = 0; j < 5; j++) {
            if (randNum == Numbers[j][0]) {
                flag = 1;
            }
        }
        if (flag == 1) {
            i--;
            flag = 0;
            continue;
        }

        //assigns generated number to array if number has not been used already
        Numbers[i][0] = randNum;
        Numbers[i][1] = Numbers[i][0] * Numbers[i][0];
        Numbers[i][2] = sqrt(Numbers[i][0]);
    }

    //outputting in matrix style grid
    cout << " ___\t\t\t\t\t     ___\n";
    cout << "|\t\t\t\t\t\t|\n";
    cout << "|RandNum\tSquared\t\tSquareRoot\t|\n";
    for (i = 0; i < 5; i++) {
        cout << "|";
        for (j = 0; j < 3; j++) {
            cout << Numbers[i][j] << "\t\t";
        }
        cout << "|\n";
    }
    cout << "|___\t\t\t\t\t     ___|\n";

    return 0;
}