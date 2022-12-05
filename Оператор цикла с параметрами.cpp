#include <iostream>

using namespace std;


int main()
{

    float X = 2;
    int N = 22;
    int switcher = 1;

    float solve = 0;


    for (int counter = 1; counter <= N; counter++) {
        solve += switcher * pow(X, counter) / counter;
        switcher *= -1;
    }

    cout << solve << endl;
}