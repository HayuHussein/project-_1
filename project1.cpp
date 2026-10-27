#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    char names[3][20];
    char marks[3][5];
    top=0;
    int total;
    double average;
    cout << "Enter the names and their respective Marks:" << endl;
    for (int i=0; i<3; i++)
    {
        cout << "Enter Name" << (i+1);
        cin >> names[i];
        for (int j=0; j<3; j++)
        {
            cout << "Enter M" << (i+1);
            cin >> marks[i][j];
        }
        cout << endl;
    }
    //------------calculation Phase---------
    for (int i=0; i<3; i++)
    {
        for (int j=0; j<3; j++)
        {
            marks[i][j+3] = marks[i][j] + marks[i][j+1] + marks[i][j+2];
            marks[i][j+4] = (marks[i][j+3])/3;
        }
    }

    //----------------Display Phase-------------------
    cout << left << setw(10) << Name << left << setw(10) << M1 << left << setw(10) << M2 << left << setw(10) << M3 << left << setw(10) << Total << left << setw(10) << Average <<endl;
    for (int i=0; i<3; i++)
    {
        cout << left << setw(10) << names[i];
        for (int j=0; j<3; j++)
        {
            cout << left << setw(10) << marks [i][j];
        }
        cout << endl;
    }
    // ----------dispalying the Top student---------
    for (int i=0; i<3; i++)
    {
        if (marks[i][3] > top)
        {
            top = names[i];
        }
    }
    



    cout << "Top student is:" << top;

    return 0;

}