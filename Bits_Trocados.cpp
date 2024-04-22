#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int x = 1, I = 0, J = 0, K = 0, L = 0, V;
    cin >> V;
    while(V != 0){
        while(V !=0){
            if(V >= 50){
                I++;
                V -= 50;
            }
            else if(V >= 10){
                J++;
                V -= 10;
            }
            else if(V >= 5){
                K++;
                V -= 5;
            }
            else{
                L++;
                V -= 1;
            }
        }
        cout << "Teste " << x << endl;
        cout << I << " " << J << " " << K << " " << L << endl;
        I = 0;
        J = 0;
        K = 0;
        L = 0;
        x++;
        cin >> V;
    }
        
        
    

    return 0;
}
