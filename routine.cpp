#include <iostream>
using namespace std;

// class
class college {
private:
    int day;
    char fname[30];
    long timing;
    int dur;
public:
    void OpenRoutine()
    {
        cout << "Enter day ";
        cin >> day;
        cout << "faculty name: ";
        cin >> fname;
        cout << " the class timing ";
        cin >> timing;
        cout << " the class duration ";
        cin >> dur;
        
    }
    void Showroutine()
    {
        cout << "day: " << day << endl;
        cout << "faculty name: " << fname << endl;
        cout << " class timing: " << timing<< endl;
        cout << "class duration " << dur << endl;
        
    }
   
    
   int Search(int);
};

int college::Search(int a)
{
    if (day == a) {
        Showroutine();
        return (1);
    }
    return (0);
}

// main code
int main()
{
    college C[25];

    int found = 0, a, ch, i;
    for (i = 0; i <= 5; i++) {
        C[i].OpenRoutine();
    }

    do {
        // display options
        cout << "\n\n1:Display All\n2:By faculty name\n5:Exit" << endl;

        // user input
        cout << "Please input your choice: ";
        cin >> ch;

        switch (ch) {
        case 1: // displating routine info
            for (i = 0; i <= 2; i++) {
                C[i].Showroutine();
            }
            break;
        case 2: // searching the record
            cout << "day? ";
            cin >> a;
            for (i = 0; i <= 2; i++) {
                found = C[i].Search(a);
                if (found)
                    break;
            }
            if (!found)
                cout << "Record Not Found" << endl;
            break;
        
        case 5: // exit
            cout << "Have a good college life" << endl;
            break;
        default:
            cout << "Wrong Option" << endl;
        }
    } while (ch != 5);
    return 0;
}
