#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
    char str[100];
    char c[100];
    int top = -1;
    cout << "Enter Your Name::";
    gets(str);
    int i, j = 0;
    for (i = 0; str[i] != '\0'; i++)
    {
        c[i] = str[i];
        top++;
    }
    while (top != -1)
    {
        cout << c[top];
        top--;
    }
}
