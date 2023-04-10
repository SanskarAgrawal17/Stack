#include <iostream>
#include <stdlib.h>
using namespace std;
#define size 5
void push(int);
int pop();
void peek();
void display();
int arr[size];
int top = -1;
int main()
{
    int s;
    cout << "\n\nSTACK IMPLEMENTATION:\n\n";
    do
    {
        cout << "\nPress 01 Push :: \n";
        cout << "Press 02 Pop :: \n";
        cout << "press 03 Peek ::\n";
        cout << "Press 04 Display ::\n";
        cout << "Press 05 Exit ::";

        cin >> s;
        switch (s)
        {
        case 1:
            int n;
            cout << "\nEnter Your Number: ";
            cin >> n;
            push(n);
            break;
        case 2:
            pop();
            break;
        case 3:
            cout << "The Top value is ";
            peek();
            break;
        case 4:
            display();
            break;
        case 5:
            cout << "\n\n<<<<<  Thank You For Coming:: >>>>>";
            break;
        default:
            cout << "OOPS!!!!!!!!! Wrong Key Please Press Valid Key::";
        }

    } while (s != 5);
}
void push(int v)
{
    if (top == size - 1)
    {
        cout << "\n\n<<<<<<<<<  STACK IS FULL ::  >>>>>>>>>>\n\n";
    }
    else
    {
        top++;
        arr[top] = v;
    }
}
int pop()
{
    if (top == -1)
    {
        cout << "\n\n<<<<<<<<<  STACK IS EMPTY ::  >>>>>>>>>>\n\n";
    }
    else
    {
        top--;
    }
}
void peek()
{
    if (top == -1)
    {
        cout << "\n\n<<<<<<<<<  STACK IS EMPTY ::  >>>>>>>>>>\n\n";
    }
    else
    {
        cout << arr[top];
    }
}
void display()
{
    int i;
    for (i = 0; i <= top; i++)
    {
        cout << arr[i] << " ";
    }
}
