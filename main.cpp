#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    srand (time(NULL));

    int r = 0;// r stands for rock
    int p = 1;// p stands for paper
    int s= 2;// s stands for scissor
    char x;

    cout << "Type in a letter; r or p or s"<<endl;
    cin >> x;

    int y = rand()%3;

    while (true)
    {
        cout << "Do you wanna play Rock, paper and scissor? y/n" << endl;
        char ans;
        cin >> ans;
        if (ans == 'y') {

            switch (y) {
                case 1:
                    cout << "Computer chose scissor" << endl;
                    if (x == 'r')
                        cout << "you win" << endl;
                    else if (x == 'p')
                        cout << "you lose" << endl;
                    else
                        cout << "tie" << endl;
                    break;
                case 2:
                    cout << "Computer chose paper" << endl;
                    if (x == 'r')
                        cout << "you lose" << endl;
                    else if (x == 'p')
                        cout << " tie" << endl;
                    else
                        cout << "you win" << endl;
                    break;

                case 3:
                    cout << "Computer chose rock" << endl;
                    if (x == 'r')
                        cout << "tie" << endl;
                    else if (x == 'p')
                        cout << " you win " << endl;
                    else
                        cout << " you lose" << endl;
                    break;
            }
        }
         else {
                    break;

            }

        }



    return 0;
}
