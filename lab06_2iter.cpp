#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;
void Print(int* a, const int size);
int Max(int* a, const int size);
void Create(int* r, const int size, const int Low, const int High);

int main()
{
    srand((unsigned)time(NULL));

    const int n = 10;
    int a[n];

    int Low = 0;
    int High = 100;

    Create(a, n, Low, High);
    cout << "a:";
    Print(a, n);
    cout << "imax = " << Max(a,n) << endl;

    return 0;
}
void Create(int* r, const int size, const int Low, const int High)
{
    for (int i = 0; i < size; i++)
        r[i] = Low + rand() % (High - Low + 1);
}

void Print(int* a, const int size)
{
    for (int i = 0; i < size; i++)
        cout << setw(4) << a[i];
    cout << endl;
}

int Max(int* a, const int size) {
    int imax = -1;
    for (int i = 0; i < size; i++)
        if (a[i] % 2 == 0)
        {
            imax = i;
            break;
        }
    if (imax == -1){
        cerr << "немає елементів, які задовольняють умові" << endl;
    return 0;
}

    for (int i = imax + 1; i < size; i++)
        if (a[i] > a[imax] && a[i] % 2 == 0)
            imax = i;
    return imax;
}