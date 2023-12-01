#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
using namespace std;
// define maximum number of patients in a queue
#define MAXPATIENTS 100
// define structure for patient data
struct patient
{
    char FirstName[50];
    char LastName[50];
    char ID[20];
};
// define class for queue
class queue
{
    public:
    queue (void);
    int AddPatientAtEnd (patient p);
    int AddPatientAtBeginning (patient p);
    patient GetNextPatient (void);
    int RemoveDeadPatient (patient * p);
    void OutputList (void);
    char DepartmentName[50];
    private:
    int NumberOfPatients;
    patient List[MAXPATIENTS];
};
// declare member functions for queue
queue::queue ()
{
    // constructor
    NumberOfPatients = 0;
}
int queue::AddPatientAtEnd (patient p)
{
    // adds a normal patient to the end of the queue.
    // returns 1 if successful, 0 if queue is full.
    if (NumberOfPatients >= MAXPATIENTS)
    {
        // queue is full
        return 0;
    }
    // put in new patient
    else
        List[NumberOfPatients] = p;  NumberOfPatients++;
    return 1;
}
int queue::AddPatientAtBeginning (patient p)
{
    // adds a critically ill patient to the beginning of the queue.
    // returns 1 if successful, 0 if queue is full.
    int i;
    if (NumberOfPatients >= MAXPATIENTS)
    {
        // queue is full
        return 0;
    }
    // move all patients one position back in queue
    for (i = NumberOfPatients-1; i >= 0; i--)
    {
        List[i+1] = List[i];
    }
    // put in new patient
    List[0] = p;  NumberOfPatients++;
    return 1;
}
patient queue::GetNextPatient (void)
{
    // gets the patient that is first in the queue.
    // returns patient with no ID if queue is empty
    int i;  patient p;
        if (NumberOfPatients == 0) {
        // queue is empty
        strcpy(p.ID,"");
        return p;
    }
    // get first patient
    p = List[0];
    // move all remaining patients one position forward in queue
    NumberOfPatients--;
    for (i=0; i<NumberOfPatients; i++)
    {
        List[i] = List[i+1];
    }
    // return patient
    return p;
}
int queue::RemoveDeadPatient (patient * p)
{
    // removes a patient from queue.
    // returns 1 if successful, 0 if patient not found
    int i, j, found = 0;
    // search for patient
    for (i=0; i<NumberOfPatients; i++)
    {
        if (stricmp(List[i].ID, p->ID) == 0)
        {
            // patient found in queue
            *p = List[i];  found = 1;
            // move all following patients one position forward in queue
            NumberOfPatients;
            for (j=i; j<NumberOfPatients; j++)
            {
                List[j] = List[j+1];
            }
        }
    }
    return found;
}
void queue::OutputList (void)
{
    // lists entire queue on screen
    int i;
    if (NumberOfPatients == 0)
    {
        cout << "Queue is empty";
    }
    else
    {
        cout<<"    First Name\t";
        cout<<"   Last Name\t";
        cout<<"Security Number\t\n";
        for (i=0; i<NumberOfPatients; i++)
        {
            cout<<i+1<<" ";
            cout << "   " << List[i].FirstName<<"     \t";
            cout << List[i].LastName<<"\t\t";
            cout << " " << List[i].ID;cout<<endl;
        }
    }
}
// declare functions used by main:
patient InputPatient (void)
{
    // this function asks user for patient data.
    patient p;
    cout << "Please enter data for new patient \n";
    cout<<"First name:";
    cin.getline(p.FirstName, sizeof(p.FirstName));
    cout<<endl;
    cout << "Last name: ";
    cin.getline(p.LastName, sizeof(p.LastName));
    cout<<endl;
    cout << "Social security number: ";
    cin.getline(p.ID, sizeof(p.ID));
    // check if data valid
    if (p.FirstName[0]==0 || p.LastName[0]==0 || p.ID[0]==0)
    {
        // rejected
        strcpy(p.ID,"");
        cout << "Error: Data not valid. Operation cancelled.";cout<<endl;
        getch();
    }
    return p;
}
void OutputPatient (patient * p)
{
    // this function outputs patient data to the screen
    if (p == NULL || p->ID[0]==0)
    {
        cout << "No patient";cout<<endl;
        return;
    }
    else
    cout << "Patient data:";cout<<endl;
    cout << "First name: " << p->FirstName;cout<<endl;
    cout << "Last name: " << p->LastName;cout<<endl;
    cout << "Social security number: " << p->ID;cout<<endl;
}
int ReadNumber()
{
    // this function reads an integer number from the keyboard.
    // it is used because input with cin >> doesn’t work properly!
    char buffer[20];
    cin.getline(buffer, sizeof(buffer));
    return atoi(buffer);
}
void DepartmentMenu (queue * q)
{
    // this function defines the user interface with menu for one department
    int choice = 0, success;  patient p;
    while (choice != 6)
    {
        // clear screen
        system("cls");
        // print menu
        cout << "Welcome to department: " << q->DepartmentName; cout<<endl;
        cout << "Please enter your choice:";cout<<endl;
        cout << "1:  Add normal patient";cout<<endl;
        cout << "2:  Add critically ill patient";cout<<endl;
        cout << "3:  Take out patient for operation";cout<<endl;
        cout << "4:  Remove dead patient from queue";cout<<endl;
        cout << "5:  List queue";cout<<endl;
        cout << "6:  Change department or exit";cout<<endl;
        // get user choice
        choice = ReadNumber();
        // do indicated action
        switch (choice)
        {
            case 1:   // Add normal patient
                p = InputPatient();
                if (p.ID[0])
                {
                    success = q->AddPatientAtEnd(p);
                    //clrscr();
                    if (success)
                    {
                        cout << "Patient added:";cout<<endl;
                    }
                    else
                    {
                        // error
                        cout << "Error: The queue is full. Cannot add patient:";cout<<endl;
                    }
                    OutputPatient(&p);
                    cout << "Press any key";cout<<endl;
                    getch();
                }
            break;
            case 2:   // Add critically ill patient
                p = InputPatient();
                if (p.ID[0])
                {
                    success = q->AddPatientAtBeginning(p);
                    system("cls");
                    if (success)
                    {
                        cout << "Patient added:";cout<<endl;
                    }
                    else
                    {
                        // error
                        cout << "Error: The queue is full. Cannot add patient:";cout<<endl;
                    }
                    OutputPatient(&p);
                    cout << "Press any key";cout<<endl;
                    getch();
                }
            break;
            case 3:   // Take out patient for operation
                p = q->GetNextPatient();
                //clrscr();
                if (p.ID[0])
                {
                    cout << "Patient to operate:";cout<<endl;
                    OutputPatient(&p);
                }
                else
                {
                    cout << "There is no patient to operate.";cout<<endl;
                }
                cout << "Press any key";cout<<endl;
                getch();
            break;
            case 4:   // Remove dead patient from queue
                p = InputPatient();
                if (p.ID[0])
                {
                    success = q->RemoveDeadPatient(&p);
                    if (success)
                    {
                        cout << "Patient removed:";cout<<endl;
                    }
                    else
                    {
                        // error
                        cout << "Error: Cannot find patient:";cout<<endl;
                    }
                    OutputPatient(&p);
                    cout << "Press any key";cout<<endl;
                    getch();
                }
            break;
            case 5:   // List queue
                q->OutputList();
                cout << "Press any key";cout<<endl;
                getch();  
            break;
        }
    }
}
// main function defining queues and main menu
int main ()
{
    int i, MenuChoice = 0;
    // define three queues
    queue departments[3];
    // set department names
    strcpy (departments[0].DepartmentName, "Heart clinic");
    strcpy (departments[1].DepartmentName, "Lung clinic");
    strcpy (departments[2].DepartmentName, "Plastic surgery");
    while (MenuChoice != 4)
    {
        // clear screen
        system("cls");
        // print menu
        cout << "Welcome to Software City Hospital";cout<<endl;
        cout << "Please enter your choice:";cout<<endl;
        for (i = 0; i < 3; i++)
        {
            // write menu item for department i
            cout << "" << (i+1) << ":  " << departments[i].DepartmentName;cout<<endl;
        }
        cout << "4:  Exit";cout<<endl;
        // get user choice
        MenuChoice = ReadNumber();
        // is it a department name?
        if (MenuChoice >= 1 && MenuChoice <= 3)
        {
            // call submenu for department
            // (using pointer arithmetics here:)
            DepartmentMenu (departments + (MenuChoice-1));
        }
    }
}
