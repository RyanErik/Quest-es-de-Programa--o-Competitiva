#include <iostream>

using namespace std;

int main()
{
    int C, P, F;
    cin >> C >> P >> F;
    if(P/C >= F) cout << "S";
    else cout << "N";
    return 0;
}
