#include <iostream>
#include <ctime>
using namespace std;

int main(int argc, char **argv)
{
    srand(time(NULL));
    int number = rand() % 4 + 1;
    if (argc == number)
    {
        cout << "That's correct! I take " << number << " parameters!" << endl;
        return 0;
    }
    if (argc != number)
    {
        cout << "You have guessed incorrectly. I take " << number << " parameters. Do not pass go and do not collect $200." << endl;
        return 1;
    }
}
