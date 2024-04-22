#include <iostream>

using namespace std;


int main()
{
    int x1, y1, x2, y2, n, x, y, cont = 0, aux = 1;
    cin >> x1 >> y1 >> x2 >> y2;
    while(x1 != 0 && x2 != 0 && y1 != 0 && y2 != 0){
        cin >> n;
        for(int i = 0; i < n; i++){
            cin >> x >> y;
            if(x1 <= x && x2 >= x && y1 >= y && y2 <= y) cont++;
        }
        cout << "Teste " << aux << endl;
        cout << cont << endl;
        cont = 0;
        aux++;
        cin >> x1 >> y1 >> x2 >> y2;
    }
    return 0;
}
