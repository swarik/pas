#include <iostream>
#include <vector>

using namespace std;
vector<long long> pascalsTriangle(int);
long double fact(int);

int main()
{
    cout << "Hello World!\n";
    int n;
    cout << "> ";
    cin >> n;
    cout << endl;

    pascalsTriangle(n);

    return 0;
}
// ******************************************
vector<long long> pascalsTriangle(int n)
{
    vector <long long> pasT{ n };
    int row=0;
    while (row <= n) {
        for (int k = 0; k <= row; k++) {

            cout << "*";


        }
        cout << endl;

        row++;
    }

    return pasT;

}
// *******************************************
long double fact(int f)
{
    if (f == 0) return 1;
    else return f * fact(f - 1);
}
