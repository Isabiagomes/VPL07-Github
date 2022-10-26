#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int np[6][11], d1[20], d2[20], n;
    while (cin >> n && n) {
        memset(np, 1, sizeof(np));
        for (int vez = 1; vez <= n; vez++)
        {
            for (char c = 'A'; c <= 'E'; c++)
                cin >> d1[c - 'A'] >> d2[c - 'A'];

            for (int digitodavez = 0; digitodavez < 6; digitodavez++)
            {
                char c;
                cin >> c;
                for (int novodigito = 0; novodigito <= 9; novodigito++)
                {
                    if (novodigito == d1[c - 'A'] ||novodigito == d2[c - 'A'])
                        continue;
                    np[digitodavez][novodigito] = 0;
                }
            }
        }
        
        for (int digitodavez = 0; digitodavez < 6; digitodavez++)
            for (int novodigito = 0; novodigito <= 9; novodigito++)
                if (np[digitodavez][novodigito])
                    cout << novodigito << " ";

        cout << endl << endl;
    }
    return 0;
}
