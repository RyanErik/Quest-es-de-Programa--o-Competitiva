#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> V;
    int x, I = 0, J = 0, K = 0, L = 0;
    for(;;){
        cin >> x;
        V.push_back(x);
        if(x == 0) break;
    } 
    for(int i = 0; i < V.size(); i++){
        while(V[i] !=0){
            if(V[i] >= 50){
                I++;
                V[i] -= 50;
            }
            else if(V[i] >= 10){
                J++;
                V[i] -= 10;
            }
            else if(V[i] >= 5){
                K++;
                V[i] -= 5;
            }
            else{
                L++;
                V[i] -= 1;
            }
        }
        if(i != V.size() - 1){
            cout << "Teste " << i + 1 << endl;
            cout << I << " " << J << " " << K << " " << L << endl;
            I = 0;
            J = 0;
            K = 0;
            L = 0;
        }
    }

    return 0;
}
