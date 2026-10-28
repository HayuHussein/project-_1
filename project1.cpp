#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    char names[5][20];
    int marks[5][3];
    int top=0;
    int total[5];
    double average[5];

    //--------------input phase----------
    cout << "Enter the names and their respective Marks:" << endl;
    for (int i=0; i<5; i++)
    {
        cout << "Enter Name" << (i+1) <<":";
        // cin >> names[i];
        cin.getline(names[i], 20);
        for (int j=0; j<3; j++)
        {
            cout << "Enter M" << (j+1) <<":";
            cin >> marks[i][j];
        }
        cin.ignore();
        cout << endl;
    }

    //------------calculation Phase---------

    for (int i=0; i<5; i++)
    {
        total[i] = marks[i][0] + marks[i][1] + marks[i][2];
        average[i] = total[i] / 3.0;

    }

    //----------------Display Phase-------------------
    cout << left << setw(15) << "Name" << left << setw(7) << "M1" << left << setw(7) << "M2" << left << setw(7) << "M3" << left << setw(7) << "Total" << left << setw(7) << "Average" <<endl;

    for (int i=0; i<5; i++)
    {
        cout << left << setw(15) << names[i];
        for (int j=0; j<3; j++)
        {
            cout << left << setw(7) << marks [i][j];
        }
        cout << left << setw(7) << total[i];
        cout << left << setw(7) << average[i];
        cout << endl;
    }
    // ----------dispalying the Top student---------
    for (int i=0; i<5; i++)
    {
        if (total[i] > total[top])
        {
            top = i;
        }
    }

    cout << "\nTop student(s):" << endl;
    for (int i=0; i<5; i++)
    {
        if (total[i] == total[top])
        {
          cout << names[i];
          cout << " | Total Mark: " << total[i] << endl;  
        }
    }


    return 0;

}
