#include <iostream>
#include <stdlib.h>
using namespace std;
#define size 10

int top1 = -1;
void push1(int);
int pop1();
void peek1();

int top2 = size;
void push2(int);
int pop2();
void peek2();
void display();

int arr[size];

int main()
{
    int s;
    do
    {
        system("cls");
        cout << "\n\nSTACK IMPLEMENTATION:\n\n";
        cout << "\nPress 01 Push :: \n";
        cout << "Press 02 Pop :: \n";
        cout << "press 03 Peek ::\n";
        cout << "Press 04 Display ::\n";
        cout << "Press 05 Exit Program ::";
        cin >> s;
        switch (s)
        {
        case 1:
            system("cls");
            int n, p;
            do
            {
                cout << "\nWHERE YOU PUSH ??..\n\nStack1 Press1::\nstack2 Press 2::";
                cout << "\nExit Press 3::";
                cin >> p;
                switch (p)
                {
                case 1:
                    cout << "\nEnter Your Number: ";
                    cin >> n;
                    push1(n);
                    break;
                case 2:
                    cout << "\nEnter Your Number: ";
                    cin >> n;
                    push2(n);
                    break;
                case 3:
                    cout << ".";
                    break;
                default:
                    cout << "<<< Wrong Key >>>";
                }

            } while (p != 3);

            break;
        case 2:
            system("cls");
            int p1;
            do
            {
                cout << "\nWHERE YOU POP\n\nStack1 Press1::\nstack2 Press 2::";
                cout << "\nExit Press 3::";
                cin >> p1;
                switch (p1)
                {
                case 1:
                    pop1();
                    break;
                case 2:
                    pop2();
                    break;
                case 3:
                    cout << ".";
                    break;
                default:
                    cout << "<<< Wrong Key >>>";
                }

            } while (p != 3);

            break;
        case 3:
            system("cls");

            cout << "\nThe Top value of Stack 1 is ";
            peek1();
            cout << "\nThe Top value of Stack 2 is ";
            peek2();
            break;
        case 4:
            system("cls");

            display();
            break;
        case 5:
            cout << "\n\n<<<<<  Thank You For Coming::  >>>>>\n\n";
            break;
        default:
            cout << "\nOOPS!!!!!!!!! Wrong Key Please Press Valid Key::\n\n";
        }

    } while (s != 5);
}
void push1(int v)
{
    if (top1 == (size / 2) - 1)
    {
        cout << "\n\n<<<<<<<<< :: STACK IS FULL ::  >>>>>>>>>>\n\n";
    }
    else
    {

        top1++;
        arr[top1] = v;
        cout << "Pushed !" << endl;
    }
    system("pause");
}
void push2(int v)
{
    if (top2 == (size / 2))
    {
        cout << "\n\n<<<<<<<<< :: STACK IS FULL ::  >>>>>>>>>>\n\n";
    }
    else
    {
        top2--;
        arr[top2] = v;
        cout << "Pushed !" << endl;
    }
    system("pause");
}
int pop1()
{
    if (top1 == -1)
    {
        cout << "\n\n<<<<<<<<< :: STACK IS EMPTY ::  >>>>>>>>>>\n\n";
    }
    else
    {
        arr[top1] = 0;
        top1--;
        cout << "Popped !" << endl;
    }
    system("pause");
}
int pop2()
{
    if (top2 == size)
    {
        cout << "\n\n<<<<<<<<< :: STACK IS EMPTY ::  >>>>>>>>>>\n\n";
    }
    else
    {
        arr[top2] = 0;
        top2++;
        cout << "Popped !" << endl;
    }
    system("pause");
}

void peek1()
{
    if (top1 == -1)
    {
        cout << "\n\n<<<<<<<<< :: STACK IS EMPTY ::  >>>>>>>>>>\n\n";
    }
    else
    {
        cout << arr[top1];
    }
    system("pause");
}
void peek2()
{
    if (top2 == (size / 2) - 1)
    {
        cout << "\n\n<<<<<<<<< :: STACK IS EMPTY ::  >>>>>>>>>>\n\n";
    }
    else
    {
        cout << arr[top2];
    }
    system("pause");
}

void display()
{
    int i;
    for (i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
    system("pause");
}
