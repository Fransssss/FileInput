// Author : Fransiskus Agapa

#include <iostream>
#include "fstream"
#include "string"

using std::string;
using std::ifstream;
using std::cout;
using std::endl;
using std::cin;
using std::getline;

int main()
{
    ifstream inFS;                       // input file stream
    string userChoice;
    cout << "\n== Access Data Soccer Team 2010/11 ==" << endl;
    cout << "1. Liverpool" << endl;
    cout << "2. Barcelona" << endl;
    cout << "3. Real Madrid" << endl;
    cout << "e. Exit" << endl;
    cout << "choice: ";
    cin >> userChoice;

    while(userChoice != "e" and userChoice != "E")
    {
        if(userChoice == "1")
        {
            int numbering = 1;
            string player;
            cout << "\n= Liverpool 2010/10 =" << endl;
            inFS.open("Liverpool.txt");
            if(inFS.is_open())
            {
                cout << "File is open" << endl;
            }
            else
            {
                cout << "File is not open" << endl;
            }

            if(inFS.is_open())
            {
                while(!inFS.eof())                           // while there is data in file
                {
                    getline(inFS, player);
                    cout << numbering << ' ' << player << endl;
                    numbering++;
                }
            }
            else
            {
                cout << "\n[ File cannot be opened ]" << endl;
            }
            inFS.close();
        }

        else if(userChoice == "2")
        {
            int numbering = 1;
            string player;
            cout << "\n= Barcelona 2010/11 =" << endl;
            inFS.open("Barcelona.txt");
            if(inFS.is_open())
            {
                while(!inFS.eof())
                {
                    getline(inFS, player);
                    cout << numbering << ' ' << player << endl;
                    numbering++;
                }
            }
            else
            {
                cout << "\n[ File cannot be opened ]" << endl;
            }
            inFS.close();                                           // close so it can be opened again later
        }

        else if(userChoice == "3")
        {
            int numbering = 1;
            string player;
            cout << "\n= Real Madrid 2010/11 =" << endl;
            inFS.open("RealMadrid.txt");
            if(inFS.is_open())
            {
                while(!inFS.eof())
                {
                    getline(inFS, player);
                    cout << numbering << ' ' << player << endl;
                    numbering++;
                }
            }
            else
            {
                cout << "\n[ File cannot be opened ]" << endl;
            }
            inFS.close();
        }

        else
        {
            cout << "\n[ Invalid choice ]" << endl;
        }

        cout << "\n== Access Data Soccer Team 2010/11 ==" << endl;
        cout << "1. Liverpool" << endl;
        cout << "2. Barcelona" << endl;
        cout << "3. Real Madrid" << endl;
        cout << "e. Exit" << endl;
        cout << "choice: ";
        cin >> userChoice;
    }


    if(userChoice == "e" or userChoice == "E")
    {
        cout << "\n== Exit Program == " << endl;
    }

    return 0;
}
