#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char jogo[6];
    int vit = 0;
    for(int i = 0; i < 6; i++){
        cin >> jogo[i];
        if(jogo[i] == 'V') vit++;
    }
    if(vit >= 5) cout << 1;
    else if(vit >=3) cout << 2;
    else if(vit >= 1) cout << 3;
    else cout << -1; 
    return 0;
}
