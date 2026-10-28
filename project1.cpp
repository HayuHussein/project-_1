#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    char names[3][20];
    int marks[3][5];
    int top=0;
    double average[3];

    //--------------input phase----------
    cout << "Enter the names and their respective Marks:" << endl;
    for (int i=0; i<3; i++)
    {
        cout << "Enter Name" << (i+1) <<":";
        cin >> names[i];
        for (int j=0; j<3; j++)
        {
            cout << "Enter M" << (j+1) <<":";
            cin >> marks[i][j];
        }
        cout << endl;
    }

    //------------calculation Phase---------
    for (int i=0; i<3; i++)
    {
        marks[i][3] = marks[i][0] + marks[i][1] + marks[i][2];
        average[i]= (marks[i][3])/3.0;
    }

    //----------------Display Phase-------------------
    cout << left << setw(10) << "Name" << left << setw(10) << "M1" << left << setw(10) << "M2" << left << setw(10) << "M3" << left << setw(10) << "Total" << left << setw(10) << "Average" <<endl;
    for (int i=0; i<3; i++)
    {
        cout << left << setw(10) << names[i];
        for (int j=0; j<4; j++)
        {
            cout << left << setw(10) << marks [i][j];
        }
        cout << left << setw(10) << average[i];
        cout << endl;
    }
    // ----------dispalying the Top student---------
    for (int i=0; i<3; i++)
    {
        if (marks[i][3] > marks[top][3])
        {
            top = i;
        }
    }


    cout << "\nTop student is:" << names[top];

    return 0;

}