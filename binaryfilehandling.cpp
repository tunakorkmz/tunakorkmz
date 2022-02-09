#include <iostream>
#include <fstream>

using namespace std;
struct student
{
    char name[20];
    int phone;
    char email[20];
    int studentNumber;
};
void insert() // Add student details
{
    student st;
    cout << "\n-------------------------------------------------------------------------------------------------------" << endl;
    cout << "------------------------------------- Add Student Details ---------------------------------------------" << endl;
    cout << "\t\t\tEnter Name: ";
    cin >> st.name;
    cout << "\t\t\tEnter Telephone No.: ";
    cin >> st.phone;
    cout << "\t\t\tEnter email: ";
    cin >> st.email;
    cout << "\t\t\tEnter Student No.: ";
    cin >> st.studentNumber;

    ofstream fbout("student.bin", ios::binary | ios::out | ios::app);
    if (!fbout)
    {
        cout << "false";
    }
    else
    {
        fbout.write((char *)&st, sizeof(st));
        fbout.close();
    }
}
void display() // Display data of student

{
    student st;
    cout << "\n-------------------------------------------------------------------------------------------------------" << endl;
    cout << "------------------------------------- Student Record Table --------------------------------------------" << endl;
    ifstream fbin("student.bin", ios::binary | ios::in | ios::app);
    if (!fbin)
    {
        cout << "\n\t\t\tNo Data is Present... ";
        fbin.close();
    }
    else
    {
        fbin.read((char *)&st, sizeof(st));

        while (fbin.read((char *)&st, sizeof(st)))
        {

            cout << "\t\t\tName: " << st.name << "\n";
            cout << "\t\t\tTelephone No.: " << st.phone << "\n";
            cout << "\t\t\temail: " << st.email << "\n";
            cout << "\t\t\tStudent No.: " << st.studentNumber << "\n";
            cout << "\n\n\n\n";
        }
        fbin.close();
    }
}
void search() // search data of student
{
    student st;
    int found;
    ifstream fbin("student.bin", ios::binary | ios::in | ios::app);
    if (!fbin)
    {
        cout << "\n-------------------------------------------------------------------------------------------------------" << endl;
        cout << "------------------------------------- Student Search Data --------------------------------------------" << endl;
        cout << "\n\t\t\tNo Data is Present... " << endl;
    }
    else
    {
        string name_;
        cout << "\n-------------------------------------------------------------------------------------------------------" << endl;
        cout << "------------------------------------- Student Search Table --------------------------------------------" << endl;
        cout << "\nEnter name of Student which you want to search: ";
        cin >> name_;
        fbin.read((char *)&st, sizeof(st));
        while (fbin.read((char *)&st, sizeof(st)))
        {
            if (name_ == st.name)
            {
                cout << "\n\n\t\t\tName: " << st.name << "\n";
                cout << "\t\t\tTelephone No.: " << st.phone << "\n";
                cout << "\t\t\tEmail: " << st.email << "\n";
                cout << "\t\t\tStudent No:" << st.studentNumber << "\n";
                found = 1;
                ;
            }
        }
        if (found == 0)
        {
            cout << "\n\t\t\t Student name Not Found....";
        }
        fbin.close();
    }
}
void deleted() // ddeleted data of student
{
    student st;
    int found = 0;
    string name1;
    cout << "\n-------------------------------------------------------------------------------------------------------" << endl;
    cout << "------------------------------------- Delete Student Details ------------------------------------------" << endl;
    ifstream fbin("student.bin", ios::binary | ios::in | ios::out | ios::app);
    ofstream fbout("record.bin", ios::binary | ios::out | ios::app | ios::in);
    fbin.seekg(0);
    fbin.read((char *)&st, sizeof(st));
    if (!fbout | !fbin)
    {
        cout << "\n\t\t\tNo Data is Present..";
        fbin.close();
    }
    else
    {
        cout << "\nEnter Name of Student which you want Delete Data: ";
        cin >> name1;
        while (!fbin.eof())
        {
            if (name1 != st.name)
            {
                fbout.write((char *)&st, sizeof(st));
            }
            else
            {
                found++;
                cout << "\n\t\t\tSuccessfully Delete Data";
            }
            fbin.read((char *)&st, sizeof(st));
        }
        if (found == 0)
        {
            cout << "\n\t\t\t Student Name NO. Not Found....";
        }
        fbout.close();
        fbin.close();
        remove("student.bin");
        rename("record.bin", "student.bin");
    }
}
void modify() // Modify details of student
{
    student st;
    string name4;
    int found = 0;
    cout << "\n-------------------------------------------------------------------------------------------------------" << endl;
    cout << "------------------------------------- Student Modify Details ------------------------------------------" << endl;
    ifstream fbin("student.bin", ios::binary | ios::in | ios::out | ios::app);
    if (!fbin)
    {
        cout << "\n\t\t\tNo Data is Present..";
        fbin.close();
    }
    else
    {
        cout << "\nEnter Telefon No. of Student which you want to Modify: ";
        cin >> name4;
        ofstream fbout("record.bin", ios::binary | ios::out | ios::app | ios::in);
        fbin.read((char *)&st, sizeof(st));
        while (!fbin.eof())
        {
            if (name4 != st.name)
                fbout.write((char *)&st, sizeof(st));
            else
            {
                cout << "\n\t\t\tEnter Name: ";
                cin >> st.name;
                cout << "\t\t\tEnter Telephone No.: ";
                cin >> st.phone;
                cout << "\t\t\tEnter email: ";
                cin >> st.email;
                cout << "\t\t\tEnter Student No.: ";
                cin >> st.studentNumber;
                fbout.write((char *)&st, sizeof(st));
                found++;
            }
            fbin.read((char *)&st, sizeof(st));
        }
        if (found == 0)
        {
            cout << "\n\n\t\t\t Student Roll No. Not Found....";
        }
        fbin.close();
        fbout.close();
        remove("student.bin");
        rename("record.bin", "student.bin");
    }
}
int main()
{
menustart:
    student st;
    int choice;
    cout << "\t\t\t-----------------------------" << endl;
    cout << "\t\t\t| STUDENT MANAGEMENT SYSTEM |" << endl;
    cout << "\t\t\t-----------------------------" << endl;
    cout << "\t\t\t 1. Enter New Record" << endl;
    cout << "\t\t\t 2. Display Record" << endl;
    cout << "\t\t\t 3. Modify Record" << endl;
    cout << "\t\t\t 4. Search Record" << endl;
    cout << "\t\t\t 5. Delete Record" << endl;
    cout << "\t\t\t 6. Exit\n"
         << endl;

    cout << "\t\t\t............................" << endl;
    cout << "\t\t\tChoose Options:[1/2/3/4/5/6]" << endl;
    cout << "\t\t\t............................" << endl;
    cout << " Enter Your Choose: ";
    cin >> choice;
    switch (choice)
    {
    case 1:
        insert();
        break;
    case 2:
        display();
        break;
    case 3:
        modify();
        break;
    case 4:
        search();
        break;
    case 5:
        deleted();
        break;
    case 6:
        cout << "\n\t\t\t Program Is Exit";
        exit(0);
    default:
        cout << "\n\n\t\t\t Invalid Choice... Please Try Again...";
    }
    goto menustart;
    return 0;
}
