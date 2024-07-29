#include <bits/stdc++.h>
using namespace std;

struct emp
{
    string name, id, address;
    long long contact, salary;
};

emp e[100];
int total = 0;

void empdata()
{
    int choice;
    cout << "How many employees data do you want to enter? ";
    cin >> choice;
    for (int i = total; i < total + choice; i++)
    {

        cout << "Enter data of employee " << i + 1 << endl
             << endl;

        cout << "Enter employee name: ";
        cin >> e[i].name;

        cout << "Enter id: ";
        cin >> e[i].id;

        cout << "Enter address: ";
        cin >> e[i].address;

        cout << "Enter contact: ";
        cin >> e[i].contact;

        cout << "Enter salary: ";
        cin >> e[i].salary;
    }

    total = total + choice;
}

void show()
{

    if (total != 0)
    {

        for (int i = 0; i < total; i++)
        {

            cout << "Data of employee " << i + 1 << endl;
            cout << "Name: " << e[i].name << endl;
            cout << "ID: " << e[i].id << endl;
            cout << "Address: " << e[i].address << endl;
            cout << "Contact: " << e[i].contact << endl;
            cout << "Salary: " << e[i].salary << endl;
        }
    }

    else
    {

        cout << "No data is entered" << endl;
    }
}

void search()
{
    if (total != 0)
    {

        string id;

        cout << "Enter id of employee which you want to search" << endl;

        cin >> id;

        for (int i = 0; i < total; i++)
        {

            if (e[i].id == id)
            {

                cout << "Data of employee " << i + 1 << endl;

                cout << "Name: " << e[i].name << endl;

                cout << "ID: " << e[i].id << endl;

                cout << "Address: " << e[i].address << endl;

                cout << "Contact: " << e[i].contact << endl;

                cout << "Salary: " << e[i].salary << endl;

                break;
            }

            if (i == total - 1)
            {

                cout << "No such record found" << endl;
            }
        }
    }
    else
    {

        cout << "No data is entered" << endl;
    }
}

void update()
{

    if (total != 0)
    {

        string id;

        cout << "Enter id of employee which you want to update" << endl;

        cin >> id;

        for (int i = 0; i < total; i++)
        {

            if (e[i].id == id)
            {

                cout << "Old data of employee " << i + 1 << endl
                     << endl;

                cout << "Name: " << e[i].name << endl;

                cout << "ID: " << e[i].id << endl;

                cout << "Address: " << e[i].address << endl;

                cout << "Contact: " << e[i].contact << endl;

                // new data ------------------------------------------

                cout << "Salary: " << e[i].salary << endl
                     << endl
                     << endl;

                cout << "\nEnter new data" << endl;

                cout << "Enter employee name: ";

                cin >> e[i].name;

                cout << "Enter id: ";

                cin >> e[i].id;

                cout << "Enter address: ";

                cin >> e[i].address;

                cout << "Enter contact: ";

                cin >> e[i].contact;

                cout << "Enter salary: ";

                cin >> e[i].salary;

                break;
            }

            if (i == total - 1)
            {

                cout << "No such record found" << endl;
            }
        }
    }
    else
    {

        cout << "No data is entered" << endl;
    }
}

void del()
{

    if (total != 0)
    {

        int press;

        cout << "Press 1 to delete specific record" << endl;

        cout << "Press 2 to delete full record" << endl;

        cin >> press;

        if (press == 1)
        {

            string id;

            cout << "Enter id of employee which you want to delete" << endl
                 << endl;

            cin >> id;

            for (int i = 0; i < total; i++)
            {

                if (e[i].id == id)
                {

                    e[i].name = e[i + 1].name;

                    e[i].id = e[i + 1].id;

                    e[i].address = e[i + 1].address;

                    e[i].contact = e[i + 1].contact;

                    e[i].salary = e[i + 1].salary;

                    total--;

                    cout << "Your required record is deleted" << endl;

                    break;
                }

                if (i == total - 1)
                {

                    cout << "No such record found" << endl;
                }
            }
        }

        else if (press == 2)
        {

            total = 0;

            cout << "All record is deleted" << endl;
        }

        else
        {

            cout << "Invalid Input" << endl;
        }
    }
    else
    {

        cout << "No data is entered" << endl;
    }
}

int main()
{

begin:
    cout << "\n\n\t***** Employee Management System *****" << endl;
    cout << "\n\n\tSign Up" << endl;
    string username, password;
    cout << "\n\t\tEnter Username: ";
    cin >> username;
    cout << "\n\t\tEnter Password: ";
    cin >> password;
    cout << endl;
    cout << "Your I'd created successfully " << endl
         << endl;

    system("CLS");

start:
    cout << "\n\n\t***** Employee Management System *****" << endl;
    cout << "\n\n\tLogin" << endl
         << endl;
    string username1, password1;
    cout << "Username: ";
    cin >> username1;
    cout << "Password: ";
    cin >> password1;

    if (username1 == username && password1 == password)
    {
        system("CLS");
        char user;

        while (1)
        {
            // cout << "\n\n\t***** Employee Management System *****" << endl<<endl;
            cout << "\n\nPress 1 to add new data" << endl;
            cout << "Press 2 to show data" << endl;
            cout << "Press 3 to search data" << endl;
            cout << "Press 4 to update data" << endl;
            cout << "Press 5 to delete data" << endl;
            cout << "Press 6 to logout data" << endl;
            cout << "Press 7 to exit" << endl
                 << endl;
            cin >> user;
            cout << endl
                 << endl;

            switch (user)
            {

            case '1':
                empdata();
                break;
            case '2':
                show();
                break;
            case '3':
                search();
                break;
            case '4':
                update();
                break;
            case '5':
                del();
                break;
            case '6':
                goto start;
                break;
            case '7':
                goto begin;
                break;
            default:
                cout << "Invalid input" << endl;
                break;
            }
        }
    }
    else if (username1 != username)
    {
        cout << "Your username is incorrect" << endl;
        goto start;
    }
    else if (password1 != password)
    {
        cout << "Your password is incorrect" << endl;
        goto start;
    }
    return 0;
}
