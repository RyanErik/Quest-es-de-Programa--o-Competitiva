#include <iostream>
#include <vector>

using namespace std;


int main()
{
    vector<int> X1, X2, Y1, Y2, N;
    int tam = 0, met = 0, aux = 0;
    typedef struct coords
    {
        int a;
        int b;
    };
    vector<coords> X;
    coords xy;

    
    int x1, x2, y1, y2, n, x, y;

    for(;;){
        cin >> x1 >> y1 >> x2 >> y2;
        X1.push_back(x1);
        X2.push_back(x2);
        Y1.push_back(y1);
        Y2.push_back(y2);
        if( x1 == 0 && x2 == 0 && y1 == 0 && y2 == 0) break;
        cin >> n;
        N.push_back(n);
        for(int i = 0; i < n; i++){
            cin >> x >> y;
            xy.a = x;
            xy.b = y;
            X.push_back(xy);
        }
        tam++;
    }
    for(int i = 0; i < tam; i++){
        while(N[i] > 0){
            if(X[aux].a >= X1[i] && X[aux].a <= X2[i] && X[aux].b >= Y2[i] && X[aux].b <= Y1[i]){
                met++;
            }
            N[i]--;
            aux++;
        }
        cout << "Teste " << i + 1<< endl;
        cout << met << endl;
        met = 0;
    }



    return 0;
}
