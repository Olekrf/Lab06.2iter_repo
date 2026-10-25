#include <iostream>
#include <iomanip>

using namespace std;
void Print(int* a, const int size);
int Max(int* a, const int size);

int main()
{
    const int n = 20;
    int a[n] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,21};
    cout << "a:git a";
    Print(a, n);
    cout << "imax = " << Max(a,n) << endl;

    return 0;
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