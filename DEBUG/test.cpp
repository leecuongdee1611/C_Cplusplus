#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

int findSquare(int a)
{
    return a * a;
}

int main(int n, char **args)
{
    for (int i = 1; i < n; i++)
    {
        int a = atoi(args[i]);
        cout << "Square is: " << findSquare(a) << endl;
    }
    return 0;
}